#include <stdio.h>
#include <stdlib.h>

// 3. Faça um programa que imprima os múltiplos de 5, no intervalo de 1 até 500.

int main(void){
    int i = 0;

    for(i; i < 500 ;i++){
        if(i % 5 == 0){
            printf("%d\n",i);
        }
    }
    return (0);
}