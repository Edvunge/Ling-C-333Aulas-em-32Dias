#include <stdlib.h>
#include <stdio.h>

/*
8. Faça um programa em C que leia dois números inteiros e imprima a subtração
deles.
*/

int main(void){
    int num1, num2, subtracc;

    printf("\nDigite dois numeros:");
    scanf("%d %d",&num1 ,&num2);

    if(num1 > num2){
        subtracc = (num1 - num2);
        printf("\nO valor da subtraccao: %d ",subtracc);
    } else {
        subtracc = (num2 - num1);
        printf("\nO valor da subtraccao: %d",subtracc);
    }
    return (0);
}