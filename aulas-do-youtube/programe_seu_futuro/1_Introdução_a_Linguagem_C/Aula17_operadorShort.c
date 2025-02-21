#include <stdio.h>
#include <stdlib.h>
//
// Created by Edvaldo Vunge on 21/02/2025.
// Aula 17 -
// operador short para o tipo int
// intervalo: -32.768 até 32.767
// %hi ou %d

int main(void){

    int y = 0;
    short int x = 32767;

    printf("Tamamnho de um int na memoria: %d bytes\n", sizeof y);
    printf("Tamamnho em memoria de shor int: %d bytes\n", sizeof x);
    return (0);
}