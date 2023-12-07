#include <stdio.h>
#include <stdlib.h>

/*
15. Faca um programa que leia um numero inteiro positivo ımpar N 
e imprima todos os numeros ımpares de 1 ate N em ordem crescente.
*/

int main(void) {
    int numP = 0;

    printf("Insira um numero inteiro positivo impar N: ");
    scanf("%d",&numP);

    for (int f = 1; f < numP; f++) {
        if(f % 2 != 0) {
            printf(" %d ",f);
        }
    }
    return (0);
}