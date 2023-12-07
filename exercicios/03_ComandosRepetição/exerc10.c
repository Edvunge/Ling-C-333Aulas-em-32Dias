#include <stdio.h>
#include <stdlib.h>

/*
10. Faca um programa que calcule e mostre a soma dos 
        50 primeiros numeros pares.
*/
int main(void) {
    int r = 0, soma = 0;

    for(r; r < 50; r++) {
        if(r % 2 == 0) {
            soma += r; 
        }
    }
    printf(" %d ",soma);
    return (0);
}