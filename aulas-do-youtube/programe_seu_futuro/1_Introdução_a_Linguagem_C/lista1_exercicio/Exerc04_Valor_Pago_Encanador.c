#include <stdio.h>
#include <stdlib.h>

int main() {
    float dias, valorFinal, desconto;

    printf("Quantos dias trabalhados? ");
    scanf("%f", &dias);

    valorFinal = dias;
    desconto = valorFinal * 8/100;

    printf("A receber: R$%.2f\nDesconto R$%.2f\n", valorFinal, desconto);
    return (0);
}