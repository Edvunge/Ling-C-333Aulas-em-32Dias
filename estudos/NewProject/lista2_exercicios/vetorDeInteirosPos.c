/*
1. Fazer um programa ler um vetor de inteiros e positivos e 
imprimir quantas vezes aparece o número 1, 3 e 4, 
nesta ordem. O vetor terá no máximo 100 posições. 
Sair do programa quando for digitado -1.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int vet[4];
    int quantNum1 = 0;
    int quantNum3 = 0;
    int quantNum4 = 0;
    int quant1 = 0;
    int quant3 = 0;
    int quant4 = 0;

    for(int i = 0; i < 4; i++){
        printf(" Pos[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < 4; i++){
        if (quantNum1 == 1 || quantNum3 == 3 || quantNum4 == 4) { 
            printf(" %d ", vet[i]);
            quantNum1++;
            quantNum3++;
            quantNum4++;

            quant1 = quantNum1;
            quant3 = quantNum3;
            quant4 = quantNum4;
        }
    }

    printf("O numero 1 aparece: %d\n", quant1);
    printf("O numero 3 aparece: %d\n", quant3);
    printf("O numero 4 aparece: %d\n", quant4);
    return (0);
}
