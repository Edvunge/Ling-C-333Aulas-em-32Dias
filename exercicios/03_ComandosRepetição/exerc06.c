#include <stdio.h>
#include <stdlib.h>

/*
6. Faca um programa que leia 10 inteiros e imprima sua media.
*/

int main(void) {
    int k = 0, media = 0, soma = 0;

    for(k; k <= 10; k++) {
        soma += k;
        media = (soma/10);
    }
    printf("\nO valor da media: %d\n",media);
    return (0);
}