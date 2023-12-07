#include <stdio.h>
#include <stdlib.h>

/*
17. Faça um programa que leia um numero inteiro positivo n 
e calcule a soma dos n primeiros numeros naturais.
*/

int main(void) {
    int numIntPosN = 0, soma = 0;

    printf("Insira um Numero Inteiro Positivo N: ");
    scanf("%d",&numIntPosN);

    for (int n = 0; n < numIntPosN; n++) {
        soma += n;
    }

    printf("soma dos %d primeiros numers naturais: \n",soma);
    return (0);
}