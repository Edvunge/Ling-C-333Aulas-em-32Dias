#include <stdio.h>
#include <stdlib.h>
/*
28. Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos
três valores lidos.
*/
int main(void){
    int num1, num2, num3, somaDosQuadrados;

    printf("\nDigite o valor do primeiro numero.");
    scanf("%d",&num1);

    printf("\nDigite o valor do segundo numero.");
    scanf("%d",&num2);

    printf("\nDigite o valor do terceiro numero.");
    scanf("%d",&num3);

    somaDosQuadrados = ((num1 + num2 + num3) * (num1 + num2 + num3));
    printf("\nO resultado das soma dos quadrados e de %d",somaDosQuadrados);
    return 0;
}