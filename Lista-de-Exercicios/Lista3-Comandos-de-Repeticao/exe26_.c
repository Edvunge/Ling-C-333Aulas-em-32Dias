#include <stdio.h>
#include <stdlib.h>

/*
26. Faca um algoritmo que encontre o primeiro 
multiplo de 11, 13 ou 17 apos um numero dado.
*/

int main(void) {
    for(int j = 0; j <= 1;j++) {
        if( 11 % j == 0 || 13 % j == 0 || 17 % j == 0 ) {
            printf(" o primeiro multiplo e: %d ",j);
        }
    }
    return (0);
}