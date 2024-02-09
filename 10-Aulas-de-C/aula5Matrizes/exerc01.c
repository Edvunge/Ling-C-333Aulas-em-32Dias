/*
1. Faça um programa em C que leia os elementos de uma matriz do tipo inteiro com
tamanho 10 X 10. Ao final, imprima todos os elementos.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int mat[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("Digite um numero: \n");
            scanf("%d",&mat[i][j]);
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("O elemento numero: %d \n",mat[i][j]);
        }
    }      
    return (0);
}