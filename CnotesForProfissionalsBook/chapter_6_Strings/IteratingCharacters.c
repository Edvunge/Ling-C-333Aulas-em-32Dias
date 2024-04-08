#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char * string = "hello world";
    size_t i = 0;

    for (; i < 11; i++) {
        printf("%c\n", string[i]);
    }
    return (0);
}