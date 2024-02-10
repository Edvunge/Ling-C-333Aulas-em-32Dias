/*
2. Faça um programa que leia os elementos de uma matriz do tipo inteiro com
tamanho 3 X 3 e imprima os elementos multiplicando por 2.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int mat[3][3];
    int elementos = 0;

    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 3; k++) {
            printf("digite um numero %d: \n",mat[i][k]);
            scanf("%d",&mat[i][k]);
        }
    }    


    for (int j = 0; j < 3; j++) {
        for (int z = 0; z < 3; z++) {
            elementos = mat[j][z] * 2;
        }
        printf("\n");
    }

    printf("elementos multiplicando por 2: %d \n",elementos);
	return (0);
}