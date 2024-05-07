#include <stdio.h>
#include <stdlib.h>

// 2. Faça um programa que imprima todos os números pares de 100 até 1.

int main(void){
    int i;

    for(i = 0; i < 100; i++){
        if(i % 2 == 0){
            printf("\n%d\n",i);
        }
    }
    return (0);
}