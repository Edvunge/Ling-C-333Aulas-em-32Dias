#include <stdio.h>
#include <stdlib.h>

/*
7. Faca um programa que leia 10 inteiros positivos, 
    ignorando nao positivos, e imprima sua media.
*/

int main(void) {
    int q = 0, media = 0, soma = 0;

    for(q; q <= 10; q++) {
        if(q > 0) { 
            soma += q;
            media = (soma/10);
        }
    }
    printf("\nO valor da media: %d\n",media);
    return (0);
}