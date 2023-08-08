#include <stdio.h>
#include <stdlib.h>
/*
Faça um algoritmo que leia 10 números 
e ao final mostre o triplo dos numeros lidos.
*/
int main(void){
    
    int i;
    float acumulador = 0;
    float resultado;
    float x[] = {34.5, 45.7, 87.0, 78.3, 32.2, 31.5, 49.1, 17.2, 71.2, 132.42};

    for(i=0; i < 10; i++){
        acumulador = acumulador + x[i];
    }

    resultado = acumulador*3;
    printf("O triplo e de: %.2f",resultado);

    return 0;
}