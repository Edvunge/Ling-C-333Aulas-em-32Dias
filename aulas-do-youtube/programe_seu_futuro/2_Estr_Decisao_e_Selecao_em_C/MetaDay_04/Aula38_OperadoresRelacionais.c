#include <stdio.h>
#include <stdlib.h>

/*
            Aula 38 - Operadores Relacionais
                Menor que (a < b)
                Maior que (a > b)
                Menor ou Igual (a <= b)
                Maior ou Igual (a >= b)
                Igual (a == b)
                Diferente (a != b)
*/

int main(void) {

    int a = 10, b = 20;

    printf("\n\tResultado: %d\n\n", a > b);
    printf("\n\tResultado: %d\n\n", a < b);
    printf("\n\tResultado: %d\n\n", a >= b);
    printf("\n\tResultado: %d\n\n", a <= b);
    printf("\n\tResultado: %d\n\n", a == b);
    printf("\n\tResultado: %d\n\n", a != b);

    return (0);
}
