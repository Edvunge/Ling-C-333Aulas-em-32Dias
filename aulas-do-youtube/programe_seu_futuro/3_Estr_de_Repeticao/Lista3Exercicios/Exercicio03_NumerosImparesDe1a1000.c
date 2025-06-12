#include <stdio.h>
#include <stdlib.h>

/*
3) Faça um programa que some os números ímpares entre 1 e 1000 
e imprima a resposta.
*/

int main(void) {
    int somaDeNumrsImpares = 0, i;

    for(i = 1; i <= 1000; i++) {
        if(i % 2 != 0) {
            somaDeNumrsImpares += i;
        }
    }

    printf("A Soma dos numeros impares entre 1 e 1000: %d ", somaDeNumrsImpares);
    return (0);
}