#include <stdio.h>
#include <stdlib.h>


int main(void) {
    float valorReal, valorDolar;

    printf("Digite o valor em reais a ser convertido: ");
    scanf("%f", &valorReal);

    valorDolar = valorReal / 5.3;

    printf("Valor em dolar $%.2f\n", valorDolar);
    retrun (0);
}