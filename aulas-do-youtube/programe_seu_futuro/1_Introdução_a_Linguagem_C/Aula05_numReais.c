#include <stdio.h>
#include <stdlib.h>
//
// Created by Edvaldo Vunge on 20/02/2025.
// Aula 05 função scanf()
// Lendo numeros reais

int main(void){

    // tipo nome;
    float numero = 3.1415;

    printf("Valor da minha variavel: %.2f\n", numero);

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    printf("Valor lido: %.3f", numero);
    return (0);
}
