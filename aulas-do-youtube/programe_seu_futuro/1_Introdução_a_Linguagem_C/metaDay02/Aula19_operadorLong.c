#include <stdio.h>
#include <stdlib.h>
//
// Created by Edvaldo Vunge on 24/02/2025.
// Aula 19
// operador long para o tipo int
// %li ou %ld

int main(void){

    long int x = 2147483647;

    printf("Tamanho de x em bytes: %d\n", sizeof x);

    printf("Valor de x: %ld\n", x);
    x++;
    printf("Valor de x: %ld\n", x);
    return (0);
}

