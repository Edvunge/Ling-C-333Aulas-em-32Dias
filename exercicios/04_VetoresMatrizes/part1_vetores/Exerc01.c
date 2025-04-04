#include <stdio.h>
#include <stdlib.h>

/*
1. Faça um programa que possua um vetor denominado 
A que armazene 6 números inteiros. 
O programa deve executar os seguintes passos:
    
    (a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
    (b) Armazene em uma variável inteira (simples) a soma entre os valores das posições
        A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
    (c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
    (d) Mostre na tela cada valor do vetor A, um em cada linha.
*/

#define LEN 6

int main(void) {
    int vet[LEN] = {1, 0, 5, -2, -5, 7};
    int var = 0;

    var = vet[0] + vet[1] + vet[5];
    printf("A SOMA: A[0], A[1] e A[5] = %d\n", var);

    for (int i = 0; i < 7; i++) {
        printf(" - ");
    }
    
    printf(" \n ");

    vet[4] = 100;

    for (int x = 0; x < LEN; x++) {
        printf("Posicao[%d] = %d\n",x , vet[x]);
    }
    return (0);
}