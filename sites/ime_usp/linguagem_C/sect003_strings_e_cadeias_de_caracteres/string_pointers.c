#include <stdio.h>

int main(void) {

    char str[20] = "GeeksForGeeks";

    char* ptr = str;

    while (*ptr != '\0') {
        printf("%c", *ptr);

        ptr++;
    }
    return (0);
}

