#include <stdio.h>
#include <stdlib.h>

/*
1. Faca um programa que determine o mostre os cinco primeiros 
multiplos de 3, considerando numeros maiores que 0.
*/

int main(void) {
    int n = 0;

    for(n; n < 5; n++) {
        if((n % 3 == 0) && n > 0){
            printf(" %d ",n);
        }
    }
    
    return (0);
}