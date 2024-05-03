#include <stdio.h>

#define ARRLEN (10)


int main(void) {
    int n[ARRLEN];
    size_t i, j;

    for (i = 0; i < ARRLEN; i++) {
        n[i] = i + 100;
    }

    for (j = 0; j < ARRLEN; j++) {
        printf("Element[%zu] = %d\n", j, n[j]);
    }
    return (0);
}