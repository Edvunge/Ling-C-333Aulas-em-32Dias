#include <stdio.h>
#include <stdlib.h>

/*
7. Faça um programa em C que leia um número e indique se o número está compre-
endido entre 20 e 50 ou não.
*/

int main(void){
    int num;

    printf("\nDigite um numero: ");
    scanf("%d",&num);

    if(num >= 20 && num <= 50){
        printf("\nO numero esta compreendido entre 20 e 50.");
    } else {
        printf("\nO  numero não esta compreendido entre 20 e 50.");
    }
    return (0);
}