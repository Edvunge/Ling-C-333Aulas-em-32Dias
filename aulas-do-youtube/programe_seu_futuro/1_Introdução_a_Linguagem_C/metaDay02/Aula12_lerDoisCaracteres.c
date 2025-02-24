#include <stdio.h>
#include <stdlib.h>
//
// Created by Edvaldo Vunge on 21/02/2025.
// Aula 12 -
// Ler dois caracteres

int main(void){

    char a, b;

    printf("Digite duas letras: ");
    scanf("%c %c", &a , &b);

    // espaço entre os %c -> comando para o computador desconsiderar o ENTER, o TAB e o ESPAÇO
    // buffer =>


    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    return (0);
}
