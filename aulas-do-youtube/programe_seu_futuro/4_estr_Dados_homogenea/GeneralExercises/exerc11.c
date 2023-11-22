#include <stdio.h>
#include <stdlib.h>

/*
11.Criar um vetor A com 10 elementos inteiros. 
Implementar um programa
que defina e escreva a quantidade de elementos armazenados neste
vetor que são pares.
*/

int main(void) {
    int vetA[10] = {8,7,6,5,4,32,3,12,13,4};
    int j, pares = 0;

    for(j = 0; j < 10; j++) {
        if(vetA[j] % 2 == 0) {
            pares++;
        }
    }

    // vetor A
    printf("\nVetor A:\n");
    for(j = 0; j < 10; j++){
        printf(" %d ",vetA[j]);
    }

    printf("\n");
    printf("Quantidade de pares: %d\n",pares);
    return (0);
}