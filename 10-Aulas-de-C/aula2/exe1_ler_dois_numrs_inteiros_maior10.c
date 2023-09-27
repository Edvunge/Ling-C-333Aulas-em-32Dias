#include <stdio.h>
#include <stdlib.h>

/*
1. Faça um programa em C que leia dois valores numéricos inteiros e efetue a adição,
caso o resultado seja maior que 10, apresentá-lo.
*/

int main(void){
    int num1, num2, soma;

    printf("\nDigite dois valores: ");
    scanf("%d%d",&num1 ,&num2);

    soma = (num1 + num2);

    if(soma > 10){
        printf("\nO valor da soma: %d",soma);
    } 
    return (0);
}