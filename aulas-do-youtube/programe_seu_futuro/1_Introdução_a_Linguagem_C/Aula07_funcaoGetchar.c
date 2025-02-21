#include <stdio.h>
#include <stdlib.h>
//
// Created by Edvaldo Vunge on 20/02/2025.
// Aula 07 função getchar()
// Lendo caracteres

int main(void){

    char letra;

    printf("Digite uma letra: ");
    letra = getchar();

    printf("Caracter lido: %c\n", letra);
    return (0);
}

