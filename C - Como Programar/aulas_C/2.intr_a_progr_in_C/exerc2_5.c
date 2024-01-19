#include <stdio.h>
#include <stdlib.h>
/*
2.5 Usando as instruções que você escreveu no Exercício 2.4,
escreva um programa completo que calcule o produto de
três inteiros.
*/

int main(void) {

    printf("Esse programa calculara o produto de tres inteiros:\n");
    int x, y, z, produto;

    printf("Digite tres valores inteiros: \n");
    scanf("%d%d%d", &x, &y, &z);

    produto = (x * y * z);

    printf("O produto eh: %d\n", produto);
    return (0);
}