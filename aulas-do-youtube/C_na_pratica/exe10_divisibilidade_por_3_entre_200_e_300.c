#include <stdio.h>
#include <stdlib.h>

// verificar quantos numeros divisiveis por 3 existe entre 200 e 300

int main(void){
    int i, quantidade =0; 

    for(i = 200; i <= 300; i++) {
        if(i % 3 == 0) {
            quantidade++;
        }
    }
    printf("\nA quantidade de numeros divisives por 3 e de: %d",quantidade);
    return (0);
}