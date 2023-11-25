#include <stdio.h>
#include <stdlib.h>

/*
12.Criar um vetor A com 10 elementos inteiros. Implementar um programa
que defina e escreva a soma de todos os elementos armazenados
neste vetor.
*/

int main(void) {
    int vetA[10] = {90,21,12,98,77,46,64,52,54,58};
    int j, soma = 0;

    for(j = 0; j < 10; j++) {
        soma += vetA[j];
    }

    printf("\nO valor da soma: %d ",soma);
    return (0);
}