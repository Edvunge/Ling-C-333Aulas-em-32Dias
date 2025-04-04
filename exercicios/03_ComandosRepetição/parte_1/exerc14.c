#include <stdio.h>
#include <stdlib.h>

/*
14. Faca um programa que leia um numero inteiro positivo par N 
e imprima todos os numeros pares de 0 ate N em ordem decrescente.
*/

int main(void) {
    int n = 0, numerM;

    printf("Digite um numero par:  \n");
    scanf("%d",&numerM);

    for(n; n < numerM; n++) {
        if (n % 2 == 0) {
            printf(" %d ",n);
        }
    }
    return (0);
}