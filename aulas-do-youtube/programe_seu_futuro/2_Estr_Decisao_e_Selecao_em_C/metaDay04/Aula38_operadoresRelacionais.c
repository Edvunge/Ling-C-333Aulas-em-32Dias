#include <stdio.h>
#include <stdlib.h>

/*
            Aula 38: Operadores Relacionais
            menor que (a < b)
            maior que (a > b)
            menor ou igual (a <= b)
            maior ou igual (a >= b)
            igual (a == b) 
            diferente (a != b)
*/
int main(void) {
    int a = 10, b = 20;

    printf("\n\t a <  b - Resultado: %d\n\n", a < b);
    printf("\n\t a >  b - Resultado: %d\n\n", a > b);
    printf("\n\t a <= b - Resultado: %d\n\n", a <= b);
    printf("\n\t a >= b - Resultado: %d\n\n", a >= b);
    printf("\n\t a == b - Resultado: %d\n\n", a == b);
    printf("\n\t a != b - Resultado: %d\n\n", a != b);
    return (0);
}