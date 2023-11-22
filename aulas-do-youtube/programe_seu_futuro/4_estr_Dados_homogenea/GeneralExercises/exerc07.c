#include <stdio.h>
#include <stdlib.h>

/*
7. Criar dois vetores A e B cada um com 10 elementos inteiros. Construir
um vetor C, onde cada elemento de C é a subtração dos respectivos
elementos em A e B, ou seja:
C[i] = A[i] – B[i].
*/

int main(void) {
    int vetA[10] = {81,71,61,51,14,32,31,12,13,99};
    int vetB[10] = {18,17,16,15,41,22,33,21,23,24};
    int j, vetC[10];

    for(j = 0; j < 10; j++) {
        vetC[j] = vetA[j] - vetB[j];
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
    
    // vetor C
    printf("\nVetor C:\n");
    for(j = 0; j < 10; j++){
        printf(" %d ",vetC[j]);
    }
    return (0);
}