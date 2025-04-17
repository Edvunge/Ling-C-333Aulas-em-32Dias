#include <stdio.h>
#include <stdlib.h>

// 6. Faça um programa que receba do usuário um vetor com 10 posições. 
// Em seguida deverá ser impresso o maior e o menor elemento do vetor.

int main(void) {

    int vet[10];
    int maxValor = 0, minValor = 112; 

    for (int l = 0; l < 10; l++) {
        printf("Digite um valor [%d]: ", l);
        scanf("%d", &vet[l]);
    }

    for (int i = 0; i < 10; i++) {
        if (vet[i] > maxValor) {
            maxValor = vet[i];
        } 
        
        if(vet[i] < minValor) {
            minValor = vet[i];
        }
    }

    printf("O maior valor eh: %d\n", maxValor);
    printf("O menor valor eh: %d\n", minValor);
    return (0);
}