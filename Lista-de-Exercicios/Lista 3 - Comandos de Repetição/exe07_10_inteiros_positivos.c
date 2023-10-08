#include <stdio.h>
#include <stdlib.h>

/*
7. Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua
média.
*/

int main(void){
    int num = 0, soma;

    while (num <= 10) {
        if(num > 0 ) {     
            printf("\nDigite o valor: ");
            scanf("%d",&num);

            soma += num;
            num++;
        }
        num++;
    }

    float media = (float)soma/10;

    printf("\nO valor da media: %.2f",media);
    return (0);
}
