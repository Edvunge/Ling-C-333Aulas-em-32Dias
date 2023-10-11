#include <stdlib.h>
#include <stdio.h>

// 6. Faça um programa que leia 10 inteiros e imprima sua média.

int main(void){    
    
    int num = 0 ,soma;

    while( num <= 10) {
        printf("\nDigite o valor:");
        scanf("%d",&num);
        soma += num;
        num++;
    }

    // calculo da media
    float media  = (float)soma/10;
    
    printf("\no valor da media: %.2f",media);
    return (0);
}