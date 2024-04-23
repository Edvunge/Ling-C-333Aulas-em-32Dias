#include <stdio.h>
#define ARRLEN 10000

int array[ARRLEN][ARRLEN];

size_t i, j;
for (i = 0; i < ARRLEN; ++i){
    for (j = 0; j < ARRLEN; ++j) {
        array[j][i] = 0;
    }
}