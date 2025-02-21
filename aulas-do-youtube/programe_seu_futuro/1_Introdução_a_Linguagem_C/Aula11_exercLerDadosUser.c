#include <stdio.h>
#include <stdlib.h>
//
// Created by Edvaldo Vunge on 21/02/2025.
// Aula 11 - exercicio
// Lendo dados do user
// ler sexo, idade, peso, e altura

int main(void){

    char sexo;
    int idade;
    float peso, altura;

    printf("Digite sexo (f, F, m ou M), idade, peso e altura: \n");
    scanf("%c%d%f%f", &sexo , &idade , &peso , &altura);

    printf("\nDADOS LIDOS: \n");
    printf("Sexo: %c\nIdade: %d\nPeso: %.1f\nAltura: %.2f\n", sexo, idade, peso, altura);

    return (0);
}


