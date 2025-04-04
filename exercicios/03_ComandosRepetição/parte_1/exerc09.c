#include <stdio.h>
#include <stdlib.h>

/*
9. Faca um programa que leia um numero inteiro N 
e depois imprima os N primeiros numeros naturais ımpares.
*/

int main(void) {
    int n = 0;

    printf("\nDigite um valor de N: ");
    scanf("%d",&n);

    for(int e = 0; e <= n; e++) {
        if(e % 2 != 0) {
            printf(" %d ",e);
        }
    }
    
    return (0);
}