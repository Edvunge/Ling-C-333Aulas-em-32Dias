#include <stdio.h>
#include <stdlib.h>

/*
8. Escreva um programa que leia 10 numeros e 
    escreva o menor valor lido e o maior valor lido.
*/

int main(void) {
    int w = 0, menor = 0, maior = 0;

    for(w; w <= 10; w++) { 
        if ( w < menor) { 
            menor = w;
        }
        if (w > maior) { 
            maior = w;
        }
    }

    printf("\nO menor valor e: %d \n",menor);
    printf("O maior valor e: %d \n",maior);
    return (0);
}