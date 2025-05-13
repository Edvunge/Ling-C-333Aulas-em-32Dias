#include <stdio.h>
#include <stdlib.h>

/*
            Aula 25
        conversao de tipos
*/


int main(void) {

    int a = 10, b = 20;

    printf("Soma:          %d\n", a + b);
    printf("Subtracao:     %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    printf("Divisao:       %.2f\n", a / (float)b);

    return (0);
}