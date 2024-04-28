#include <stdio.h>
#include <stdlib.h>
/*
3. Construa uma programa em C que armazene 15 números
em um vetor e imprima
uma listagem numerada contendo o número e
uma das mensagens: par ou ímpar.

*/

int main(void) {
    const int TAMANHO = 15; 
    int numrs[] = {1, 3, 4, 24, 32, 22, 52, 20, 11, 49, 7, 12, 13, 63, 101};
    int j = 0;
    int numrDeElemntPares = 0, numrDeElemntImpares = 0;
    

    numrs[0] = 5;
    
    //  1. Quantos pares ou impares existem:?
    
    for (j; j < TAMANHO; j++) {// 1 2 3
        if (numrs[j] % 2 == 0) {
            printf("%d = par \n",numrs[j]);
            numrDeElemntPares++;
        } else {
            printf("%d = impar \n",numrs[j]);
            numrDeElemntImpares++;
        }
    }

    printf("\n");
    printf("%d ELEMNTOS SAO PARES\n",numrDeElemntPares);
    printf("%d ELEMNTOS SAO IMPARES\n",numrDeElemntImpares);
    return (0);
}