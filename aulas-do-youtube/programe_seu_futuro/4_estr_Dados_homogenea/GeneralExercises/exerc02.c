#include <stdio.h>
#include <stdlib.h>

/*
2. Criar um vetor A com 8 elementos inteiros. Construir um vetor B de
mesmo tipo e tamanho e com os elementos do vetor A multiplicados
por 2, ou seja: B[i] = A[i] * 2.
*/

int main(void) {
    int vetA[8] = {8,7,6,5,4,32,3,12} ,vetB[8];
    int j;

    for(j = 0; j < 8; j++) {
        vetB[j] = vetA[j] * 2;
    }

    // vetor A
    printf("\nVetor A:\n");
    for(j = 0; j < 5; j++){
        printf(" %d ",vetA[j]);
    }

    // vetor B
    printf("\nVetor B multiplicado por vetA e 2:\n");
    for(j = 0; j < 5; j++){
        printf(" %d ",vetB[j]);
    }
    return (0);
}