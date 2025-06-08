#include <stdio.h>
#include <stdlib.h>

/*
            Aula 45: Operador Ternario Aninhado          
*/


int main(void) {
    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

     printf("Operador ternario:\n");
    a < 0 ? printf("\n\tValor negativo!\n") : 
        a > 0 ? printf("\n\tValor positivo!\n") : 
            printf("\n\tValor igual a zero!\n");

    return (0);
}