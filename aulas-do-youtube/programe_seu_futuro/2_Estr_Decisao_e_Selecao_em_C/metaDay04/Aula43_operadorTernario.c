#include <stdio.h>
#include <stdlib.h>

/*
            Aula 43: Operador Ternario em C
            condição ? verdadeiro : falso          
*/

int main(void) {
    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    printf("Operador ternario:\n");
    a < 0 ? printf("\n\tValor negativo!\n") : printf("\n\tValor positivo ou igual a zero!\n");

    return (0);
}