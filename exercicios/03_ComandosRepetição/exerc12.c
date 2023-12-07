#include <stdio.h>
#include <stdlib.h>

/*
12. Faca um programa que leia um numero inteiro positivo N 
e imprima todos os numeros naturais de 0 ate N em ordem decrescente.
*/

int main(void) {
    int numN;

    printf("Digite um numero: ");
    scanf("%d",&numN);

    //  ..N   ..2   ..0 
    for(int j = numN; j > 0; j--){
        printf(" %d ",j);
    }

    return (0);
}