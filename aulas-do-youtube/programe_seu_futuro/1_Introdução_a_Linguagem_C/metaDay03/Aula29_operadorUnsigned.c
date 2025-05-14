#include <stdio.h>
#include <stdlib.h>

/*
            Aula 28
        operador unsigned
        trocar o %d por %u
        limite para o tipo int: 2.147.483.647
        short int -> %d ou %hi
        unsigned short int %hu ou %d
*/


int main(void) {

    //unsigned int x; // 0 ....
    unsigned int x = 2147483647;

    unsigned short int y = 55000;

    printf("\n\t%u\n\n", ++x);
    return (0);
}