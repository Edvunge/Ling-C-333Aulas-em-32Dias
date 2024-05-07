#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 2. Faça um algoritmo que leia dois números A e B
    // e imprima o maior deles.
    int x = 7, y = 17;

    if (y > x) {
        printf("maior valor: %d", y);
    } else if (x == y) {
        printf("sao iguais: %d == %d", y, x);
    } else {
        printf("maior valor: %d", x);
    }
    
    // estrutura condicional
    // estruturas condicionais aninhadas

    printf("\nsaiu do if...");
    return (0);
}