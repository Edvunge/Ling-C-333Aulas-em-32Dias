#include <stdio.h>
#include <string.h>

int main(void) {
    int toknum = 0;
    char src[] = "Hello,, World!";

    const char delimeters[] = ", !";
    char *token = strtok(src, delimeters);

    while (token != NULL) {
        printf("%d: [%s]\n", ++toknum, token);
        token = strtok(NULL, delimeters);
    }
}