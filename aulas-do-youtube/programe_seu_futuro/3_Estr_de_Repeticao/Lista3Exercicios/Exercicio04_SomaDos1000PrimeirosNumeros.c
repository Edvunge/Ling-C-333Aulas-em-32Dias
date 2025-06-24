#include <stdio.h>
#include <stdlib.h>

/*
4) Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.

Restrição:
→ O bloco de repetição deve executar no máximo 500 vezes.
*/

int main(void) {
    int numrsImpares = 0;

    for(int i = 0; i < 1000; i++){
        if (i % 2 != 0) {
            numrsImpares += i;
        }
    }

    printf(" %d \n", numrsImpares);
    return (0);
}