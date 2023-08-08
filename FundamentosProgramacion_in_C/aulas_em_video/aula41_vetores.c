#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i;
    float acumulador = 0;
    float resultado;
    float x[] = {34.5, 45.7, 87.0, 78.3, 32.2};

    for(i=0; i < 5; i++){
        acumulador = acumulador + x[i];
    }

    resultado = acumulador / 5;
    printf("A media aritmetica e : %.2f",resultado);

    return 0;
}