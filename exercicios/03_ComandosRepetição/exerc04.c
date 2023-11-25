#include <stdio.h>
#include <stdlib.h>

/*
4. Escreva um programa que declare um inteiro, 
inicialize-o com 0, e incremente-o de 1000 em 1000, 
imprimindo seu valor na tela, ate que seu valor seja 100000 (cem mil).
*/

int main(void) {
    int z = 0;
    do {
        printf(" %d ",z);
        z+=1000;
    } while(z <= 100000);
    return (0);
}