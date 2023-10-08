#include <stdio.h>
#include <stdlib.h>

/*
11. Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente.
*/

int main(void){
    int num = 0, i = 0;

    printf("\nDigite o valor de N: ");
    scanf("%d",&i);

    for(num; num <= i; num++){
        printf("%d\n",num);
    }
    return (0);
}