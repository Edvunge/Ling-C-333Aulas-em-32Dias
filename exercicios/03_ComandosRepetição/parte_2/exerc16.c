#include <stdio.h>
#include <stdlib.h>

/*
16. Faca um programa que leia um numero inteiro positivo ımpar N 
e imprima todos os numeros ımpares de 1 ate N em ordem decrescente.
*/

int main(void) {
    int numIntPosN = 0;

    printf("Insira um numero inteiro positivo impar N: ");
    scanf("%d",&numIntPosN);

    for (int g = numIntPosN; g > 1; g--) {
        if(g % 2 != 0) {
            printf(" %d ",g);
        }
    }
    return (0);
}