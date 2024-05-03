#include <stdio.h>
#include <stdlib.h>

// 5. Faça um programa em C que leia um número e informe se ele é divisível por 3 e por 7.

int main(void){
    int num;

    printf("\nDigite um numero: ");
    scanf("%d",&num);

    if( (num % 3 == 0) && (num % 7) ){
        printf("\nE divisivel por 3 e 7.");
    } else {
        printf("\nNao e divisivel por 3 e 7.");
    }
    return (0);
}