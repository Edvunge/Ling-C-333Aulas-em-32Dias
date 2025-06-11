#include <stdio.h>
#include <stdlib.h>

//              Aula 66: Estrutura de Repeticação - FOR

int main(void) {
    int i = 0;

    for(i = 1; i <= 100; i++)
        if(i % 2 != 0)
            printf(" %d ", i);
    return (0);
} 