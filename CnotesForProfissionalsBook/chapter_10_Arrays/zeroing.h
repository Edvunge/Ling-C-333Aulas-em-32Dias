#include <stdio.h>
#include <stdlib.h>

#define ARRLEN (10)

int main(void) {
    int array[ARRLEN];

    size_t i;
    for (i = 0; i < ARRLEN; ++i) {
        array[i] = 0;
    }

    return EXIT_SUCCESS;
}