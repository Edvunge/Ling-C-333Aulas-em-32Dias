#include <stdio.h>
#include <stdlib.h>
/*
4. Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000
em 1000, imprimindo seu valor na tela, até que seu valor seja 100000 (cem mil).
*/

int main(void){
    int i = 0;

    while (i  <= 100000) {
        printf("%d\n",i);
        i+=1000;
    }
    
    return (0);
}