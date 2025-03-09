#include <stdio.h>
#include <stdlib.h>

/*
20. Faça um programa em C que efetue a apresentação do valor da conversão em
real (R$) de um valor lido em dólar (US$). Para isso, será necessário também ler o
valor da cotação do dólar.
*/

int main(void){
    double dolar, conversor;
    printf("\nDigite o valor em dollar: ");
    scanf("%lf",&dolar);

    conversor = (dolar * 5.26);
    printf("\nDo valor %.1lf \nO valor em %.1lf Rs",dolar ,conversor);
    return (0);
}