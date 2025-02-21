#include <stdio.h>
#include <stdlib.h>
//
// Created by Edvaldo Vunge on 20/02/2025.
// Aula 04 função scanf()
// Lendo numeros inteiros

int main(void){

    int valor, valor2; // criei uma variavel para guardar um valor do tipo inteiro

    // atribuição -> atribuir um valor a uma variavel
    valor = 59;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    printf("Digite um segundo valor inteiro: ");
    scanf("%d", &valor2);

    printf("valor da minha variavel: %d\n",valor);
    return (0);
}
