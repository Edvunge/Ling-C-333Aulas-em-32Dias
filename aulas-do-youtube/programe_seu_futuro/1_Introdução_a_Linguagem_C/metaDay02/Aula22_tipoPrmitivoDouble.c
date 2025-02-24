#include <stdio.h>
#include <stdlib.h>
//
// Created by Edvaldo Vunge on 24/02/2025.
// Aula 22
// operador long para o tipo double
// double -> %lf
// long double -> %lf

int main(void){

    float x = 3.1415;

    double y = 3.14155896587458962548;

    printf("Valor de y: %.10lf\n", y);
    //__mingw_printf("Valor de y: %.10lf\n", y);
    printf("Um float precisa de %d bytes de memoria.\n", sizeof(y));
    return (0);
}

