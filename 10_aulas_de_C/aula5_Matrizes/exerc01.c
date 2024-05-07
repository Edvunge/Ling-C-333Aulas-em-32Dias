/*
1. Faça um programa em C que leia os elementos de uma matriz do tipo inteiro com
tamanho 10 X 10. Ao final, imprima todos os elementos.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int mat[10][10];

    // Preenchendo a matriz
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("Digite um numero: ");
            scanf("%d", &mat[i][j]);
        }
    }

    // Imprimindo os elementos da matriz
    printf("\nElementos da matriz:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");  // Nova linha para separar as linhas da matriz
    }     
    return (0);
}