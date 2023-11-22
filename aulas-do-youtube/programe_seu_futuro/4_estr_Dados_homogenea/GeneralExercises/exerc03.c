#include <stdio.h>
#include <stdlib.h>

/*
3. Criar um vetor A com 15 elementos inteiros. Construir um vetor B de
mesmo tipo e tamanho, sendo que cada elemento do vetor B deverá
ser o quadrado do respectivo elemento de A, ou seja:
B[i] = A[i] * A[I].
*/

int main(void) {
    int vetA[15] = {8,7,6,5,4,32,3,12,132,4,5,8,7,23,35};
    int j, vetB[15];

    for(j = 0; j < 15; j++) {
        vetB[j] = vetA[j] * vetA[j];
    }

    // vetor A
    printf("\nVetor A:\n");
    for(j = 0; j < 5; j++){
        printf(" %d ",vetA[j]);
    }

    // vetor B
    printf("\nVetor B:\n");
    for(j = 0; j < 5; j++){
        printf(" %d ",vetB[j]);
    }
    return (0);
}