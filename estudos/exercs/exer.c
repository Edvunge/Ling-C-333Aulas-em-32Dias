#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAXCOL 40  // Maximum column width before folding
#define MAXLINE 1000  // Maximum input line length

// Function to fold long lines
void fold_lines(char *input, int width) {
    int len = strlen(input);
    int start = 0;
    while (start < len) {
        int end = start + width;
        if (end >= len) {
            printf("%s\n", input + start);
            break;
        }
        while (end > start && input[end] != ' ' && input[end] != '\t') {
            end--;
        }
        if (end == start) {
            end = start + width;
        }
        printf("%.*s\n", end - start, input + start);
        start = end;
        while (input[start] == ' ' || input[start] == '\t') {
            start++;
        }
    }
}

// Function to remove comments from C code
void remove_comments(char *code) {
    bool in_string = false, in_char = false, in_comment = false;
    for (int i = 0; code[i] != '\0'; i++) {
        if (!in_comment && code[i] == '"' && code[i - 1] != '\\') {
            in_string = !in_string;
        }
        if (!in_comment && code[i] == '\'' && code[i - 1] != '\\') {
            in_char = !in_char;
        }
        if (!in_string && !in_char) {
            if (!in_comment && code[i] == '/' && code[i + 1] == '*') {
                in_comment = true;
                i++;
                continue;
            }
            if (in_comment && code[i] == '*' && code[i + 1] == '/') {
                in_comment = false;
                i++;
                continue;
            }
            if (!in_comment && code[i] == '/' && code[i + 1] == '/') {
                while (code[i] != '\n' && code[i] != '\0') {
                    i++;
                }
            }
        }
        if (!in_comment) {
            putchar(code[i]);
        }
    }
}

// Function to check for rudimentary syntax errors
bool check_syntax_errors(char *code) {
    char stack[1000];
    int top = -1;
    bool in_string = false, in_char = false;
    
    for (int i = 0; code[i] != '\0'; i++) {
        if (code[i] == '"' && code[i - 1] != '\\') {
            in_string = !in_string;
        }
        if (code[i] == '\'' && code[i - 1] != '\\') {
            in_char = !in_char;
        }
        if (!in_string && !in_char) {
            if (code[i] == '(' || code[i] == '[' || code[i] == '{') {
                stack[++top] = code[i];
            } else if (code[i] == ')' || code[i] == ']' || code[i] == '}') {
                if (top == -1) return false;
                char last = stack[top--];
                if ((code[i] == ')' && last != '(') ||
                    (code[i] == ']' && last != '[') ||
                    (code[i] == '}' && last != '{')) {
                    return false;
                }
            }
        }
    }
    return top == -1;
}

int main() {
    char test_code[] = "#include <stdio.h>\n/* This is a multi-line\n   comment */\nint main() {\n    printf(\"Hello, world!\\n\"); // This is a single-line comment\n    return 0;\n}\n";
    
    printf("Folded Lines:\n");
    fold_lines(test_code, MAXCOL);
    
    printf("\nCode without comments:\n");
    remove_comments(test_code);
    
    printf("\nSyntax Check: %s\n", check_syntax_errors(test_code) ? "Syntax OK" : "Syntax Error");
    
    return 0;
}
