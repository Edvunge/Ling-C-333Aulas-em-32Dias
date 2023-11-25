#include <stdio.h>
#include <stdlib.h>

/*
13.Criar um vetor A com 10 elementos inteiros. Implementar um programa
que determine a soma dos elementos armazenados neste vetor que
são múltiplos de 5.
*/

int main(void) {
    int vetA[10] = {90,21,12,98,77,46,64,52,54,58};
    int j, soma = 0;

    for(j = 0; j < 10; j++) {
        if(vetA[j] % 5 == 0) {
            soma += vetA[j];
        }
    }

    printf("\nO valor da soma multiplos de 5: %d ",soma);
    return (0);
}