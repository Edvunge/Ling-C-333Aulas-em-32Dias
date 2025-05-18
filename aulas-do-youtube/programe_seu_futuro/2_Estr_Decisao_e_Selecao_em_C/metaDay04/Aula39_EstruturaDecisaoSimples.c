

#include <stdio.h>
#include <stdlib.h>

/*
            Aula 39: Decisão Simples
            Verificando se um número é negativo
*/
int main(void) {
    int a = 10, b = 20;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    if (a < 0)
        printf("\n\tValor Negativo!\n");
    printf("\nContinuacao do Programa...\n");
    return (0);
}