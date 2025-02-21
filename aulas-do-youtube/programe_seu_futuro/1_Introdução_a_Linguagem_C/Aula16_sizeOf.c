#include <stdio.h>
#include <stdlib.h>
//
// Created by Edvaldo Vunge on 21/02/2025.
// Aula 16 - operador sizeOf
// sizeof x ou sizeOf(int)

int main(void){

    float x = 1.0;

    printf("Tamanho de um int na memoria: %d bytes\n", sizeof(x));
    printf("Tamanho em memoria de im int: %d\n",sizeof(int));

    return (0);
}
