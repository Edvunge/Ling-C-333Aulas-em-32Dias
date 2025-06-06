#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 80

int main(int argc, char **argv) {
    char *path;
    char line[MAX_LINE_LENGTH] = {0};
    unsigned int line_count = 0;

    if (argc < 1)
        return EXIT_FAILURE;
    path = argv[1];

    // Open file
    FILE *file = fopen(path, "r");

    if (!file) {
        perror(path);
        return EXIT_FAILURE;
    }

    // Get each line until there are none left
    while (fgets(line, MAX_LINE_LENGTH, file)) {
        // Print each line
        printf("line[%06d]: %s", ++line_count, line);

        if (line[strlen(line) - 1] != '\n')
            printf("\n");
    }

    // close file
    if (fclose(file)) {
        return EXIT_FAILURE;
        perror(path);
    }
}
