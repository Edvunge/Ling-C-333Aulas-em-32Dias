#include <stdio.h>
#include <stdlib.h>
//
// Created by Edvaldo Vunge on 20/02/2025.
// Aula 06
// Lendo caracteres

int main(void){

    // tipo nome;
    char sexo = 'r';

    printf("Valor da variavel sexo: %c\n", sexo);

    printf("Digite o seu sexo: (f, F, m, ou M)");
    scanf("%c", &sexo);

    printf("Valor da variavel sexo: %c\n", sexo);
    return (0);
}

