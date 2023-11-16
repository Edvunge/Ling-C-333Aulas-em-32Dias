#include <stdio.h>
#include <stdlib.h>

/*
3) Faça um programa que some os números ímpares entre 1 e 1000 
e imprima a resposta.
*/
int main(void) {
    int soma = 0;
    
    for(int i = 0; i <= 1000 ;i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    printf("o resultado e: %d",soma);
    return 0;
}