#include <stdio.h>
#include <stdlib.h>

/*
            Aula 39 - Decisão Simples
            Verificando se número é negativo
*/

int main(void) {

    int a = 10;

    printf("\nDigite um valor qualquer: \n");
    scanf("%d\n", &a);

    if(a < 0) // if = se
        printf("\n\tValor negativo!\n");
    printf("\nContinuacao do programa...\n");
    return (0);
}
