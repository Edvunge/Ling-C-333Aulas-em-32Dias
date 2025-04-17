#include <stdio.h>
#include <stdlib.h>

// 7. Escreva um programa que leia 10 números inteiros e 
// os armazene em um vetor. Imprima o vetor, 
// o maior elemento e a posição que ele se encontra.

int main(void) {

    int vet[10];
    int maxValor = 0, posMaxValor = 0;

    for (int j = 0; j < 10; j++) {
        printf("Digite o valor da pos[%d]: ", j);
        scanf("%d", &vet[j]);
    }

    for (int in = 0; in < 10; in++) {
        if (vet[in] > maxValor) {
            maxValor = vet[in];
            posMaxValor = in;
        }
    }

    printf("O maior valor eh: %d\n", maxValor);
    printf("A posicao do maior valor eh: %d\n", posMaxValor);
    return (0);
}