#include <stdio.h>
#include <stdlib.h>
//
// Created by Edvaldo Vunge on 21/02/2025.
// Aula 08 função getc()
// Lendo caracteres

int main(void){

    char letter;

    printf("Digite um caracter: ");
    letter = getc(stdin);

    printf("Caracter lido: %c\n", letter);
    return (0);
}

