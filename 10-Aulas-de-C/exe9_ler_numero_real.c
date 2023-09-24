#include <stdio.h>
#include <stdlib.h>

/*
9. Faça um programa em C que leia um número real e imprima ¼ deste número.
*/

int main(void){
    double num, result;

    printf("\nDigite um numero: ");
    scanf("%lf",&num);

    result = (num)*1/2;

    printf("\nO resultado : %.2lf",result);
    return (0);
}