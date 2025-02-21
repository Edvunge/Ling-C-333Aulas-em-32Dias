#include <stdio.h>
#include <stdlib.h>
//
// Created by Edvaldo Vunge on 21/02/2025.
// Aula 14 -
// limpar o buffer do teclado com a função scanf

int main(void){

    char a, b;

    printf("Digite uma letra: ");
    scanf("%c",&a);

    printf("Digite uma letra: ");
    scanf(" %c",&b);

    printf("valores digitados: %c e %c", a, b);
    return (0);
}
