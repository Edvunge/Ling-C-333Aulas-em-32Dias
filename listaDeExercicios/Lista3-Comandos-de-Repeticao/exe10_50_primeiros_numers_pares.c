#include <stdio.h>
#include <stdlib.h>

// 10. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

int main(void){
    int i = 0;

    for(i; i <= 50; i++) {
        if(i % 2 == 0) {
            printf("%d\n",i);
        }
    }
    return (0);
}