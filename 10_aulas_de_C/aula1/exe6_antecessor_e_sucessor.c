#include <stdio.h>
#include <stdlib.h>

/*
6. Faça um programa em C que leia um número inteiro e imprima o seu antecessor e o seu sucessor.
*/

int main(void){
    int num, antecessor, sucessor;

    printf("\nDigite um numero inteiro: ");
    scanf("%d",&num);

    antecessor = num - 1;
    sucessor = num + 1;

    printf("\nO numero de %d o seu antecessor: %d ",num ,antecessor);
    printf("\nO numero de %d o seu sucessor: %d ",num ,sucessor);
    return (0);
}