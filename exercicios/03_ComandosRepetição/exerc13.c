#include <stdio.h>
#include <stdlib.h>

/*
13. Faca um programa que leia um numero inteiro positivo par N 
e imprima todos os numeros pares de 0 ate N em ordem crescente.
*/

int main(void) {
    int numN;

    printf("Digite um inteiro: \n");
    scanf("%d",&numN);

    // pares
    for (int h = 0; h < numN; h++) {
        if(h % 2 == 0) {
            printf(" %d ",h);
        }
    }
    return (0);
}