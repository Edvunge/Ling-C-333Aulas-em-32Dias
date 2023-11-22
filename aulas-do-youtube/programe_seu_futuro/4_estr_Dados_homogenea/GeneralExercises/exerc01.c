#include <stdio.h>
#include <stdlib.h>

/*
1. Criar um vetor A com 5 elementos inteiros. Construir um vetor B de
mesmo tipo e tamanho e com os "mesmos" elementos do vetor A, ou
seja, B[i] = A[i].
*/

int main(void) {
    int vetA[5] = {12,4,5,8,7} , vetB[5];
    int i;

    for(i = 0; i < 5; i++){
        vetB[i] = vetA[i];
    }

    // vetor A
    printf("\nVetor A:\n");
    for(i = 0; i < 5; i++){
        printf(" %d ",vetA[i]);
    }

    // vetor B
    printf("\nVetor B:\n");
    for(i = 0; i < 5; i++){
        printf(" %d ",vetB[i]);
    }
    return (0);
}