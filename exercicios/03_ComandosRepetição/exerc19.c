#include <stdio.h>
#include <stdlib.h>

/*
19. Escreva um algoritmo que leia um numero inteiro entre 100 e 999 
e imprima na saıda cada um dos algarismos que compoem o numero
*/

int main(void) {
    int numInter = 0, j;

    for (j = 100; j <= 999; j++) {
        printf(" %d ",j);
    }
    return (0);
}