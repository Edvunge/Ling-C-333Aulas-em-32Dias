#include <stdio.h>
#include <stdlib.h>

// 4.25) Faça um programa que lê três números reais do teclado 
// e apresenta na tela a média destes números.

int main(void) {
    float num1 = 0, num2 = 0, num3 = 0, media = 0;

    printf("Digite o primeiro numero: ");
    scanf("%f",&num1);
    
    printf("Digite o segundo numero: ");
    scanf("%f",&num2);

    printf("Digite o terceiro numero: ");
    scanf("%f",&num3);

    media = (num1 + num2 + num3)/3;
    printf("A sua media eh: %.2f ",media);
    return (0);
}