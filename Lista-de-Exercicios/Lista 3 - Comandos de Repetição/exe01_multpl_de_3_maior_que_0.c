#include <stdlib.h>
#include <stdio.h>

/*
1. Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, 
conside-rando números maiores que 0.
*/

int main(void){
    int i = 0;

    for(i; i <= 5; i++){
        if(i % 3 == 0){
            printf("%d\n",i);
        }
    }
    return (0);
}