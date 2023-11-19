#include <stdio.h>
#include <stdlib.h>

/*
2) Faça um programa que some o conteúdo de 
dois vetores de tamanho 25 e armazene o resultado
em um terceiro vetor. Imprima os três vetores na tela.
*/

int main(void) {
    
    int vet1[25] = {1,2,3,4,5,6,7,8,9,3,2,1,6,5,4,9,8,7,12,32,4,8,9,5,7}, 
        vet2[25] = {3,2,1,6,5,4,9,8,7,12,32,4,8,9,5,7,1,2,3,4,5,6,7,8,9}, 
        vet3[25], i;

    // soma de dois vetores e atribuição a um terceiro
    for(i = 0; i < 25; i++){
        vet3[i] = vet1[i] + vet2[i];
    }

    printf("\nvetor 1\n");
    // mostrar na tela o vetor 1
    for(i = 0; i < 25; i++){
        printf(" %.2d ",vet1[i]);
    }
    
    printf("\nvetor 2\n");
    // mostrar na tela o vetor 2
    for(i = 0; i < 25; i++){
        printf(" %.2d ",vet2[i]);
    }

    printf("\nvetor 3\n");
    // mostrar na tela o vetor 3
    for(i = 0; i < 25; i++){
        printf(" %.2d ",vet3[i]);
    }
    return (0);
}