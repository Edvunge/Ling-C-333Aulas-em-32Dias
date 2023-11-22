#include <stdlib.h>
#include <stdio.h>
/*
5. Criar um vetor A com 10 elementos inteiros. Construir um vetor B de
mesmo tipo e tamanho, sendo que cada elemento do vetor B deverá
ser o respectivo elemento de A multiplicado por sua posição (ou
índice), ou seja:
B[i] = A[i] * i.
*/

int main(void) {
    int vetA[10] = {8,7,6,5,4,32,3,12,132,4};
    int j, vetB[10];

    for(j = 0; j < 10; j++) {
        vetB[j] = vetA[j] * j;
    }

    // vetor A
    printf("\nVetor A:\n");
    for(j = 0; j < 10; j++){
        printf(" %d ",vetA[j]);
    }

    // vetor B
    printf("\nVetor B:\n");
    for(j = 0; j < 10; j++){
        printf(" %d ",vetB[j]);
    }
    return (0);
}