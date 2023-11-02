#include <stdio.h>
#include <stdlib.h>
/*
    6) Crie um programa em C que permita fazer a 
    conversão cambial entre Reais e Dólares. 
    Considere como taxa de câmbio US$1,0 = R$5,30. 
    Leia um valor em Reais e mostre o correspondente em Dólares.
*/
int main(void){
    float valorEmReal, valorEmDolar;

    printf("Digite o valor em reais a ser convertido:\n");
    scanf("%f", &valorEmReal);

    valorEmDolar = valorEmReal / 5.3;
    printf("Valor em dolar: US%.2f\n", valorEmDolar);
    return 0;
}