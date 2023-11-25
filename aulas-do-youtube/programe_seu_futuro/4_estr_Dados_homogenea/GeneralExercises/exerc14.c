#include <stdio.h>
#include <stdlib.h>

/*
14.Criar um vetor A com 10 elementos inteiros. Implementar um programa
que defina e escreva a média aritmética simples dos elementos
ímpares armazenados neste vetor.
*/
int main(void) {
    int vetA[10] = {90,21,12,98,77,46,64,52,54,58};
    int j;
    float media = 0;
    int count = 0;

    for(j = 0; j < 10; j++) {
        if (vetA[j] % 2 != 0) {
            media += vetA[j];
            count++;
        }
    }

    if (count > 0) {
        media /= count;
        printf("\nO valor da media: %.2f ", media);
    } else {
        printf("\nNenhum elemento impar encontrado.");
    }

    return 0;
}
