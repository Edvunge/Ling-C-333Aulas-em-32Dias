#include <stdio.h>
#include <stdlib.h>

/*
                        Aula 29
                Operador unsigned
                trocar o %d por %u
                limite para o tipo int: 2.147.483.647
                short int -> %d ou %hi
                unsigned shor int %hu ou %d
                unsigned long int %li
*/

int main(void) {

    unsigned int x = 2147483647;
    unsigned short y = 55000;

    printf("\n\t %hu \n\n", y);
    return (0);
}
