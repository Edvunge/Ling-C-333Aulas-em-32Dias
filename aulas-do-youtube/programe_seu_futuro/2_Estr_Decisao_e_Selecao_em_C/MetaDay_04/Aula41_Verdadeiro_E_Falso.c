#include <stdio.h>
#include <stdlib.h>

/*
            Aula 41 - Verdadeiro e falso na linguagem C
*/

int main(void) {

    int a = 10;

    printf("\nDigite um valor qualquer: \n");
    scanf("%d\n", &a);

    if(a < 0) // if = se
        printf("\n\tValor negativo!\n");
    else
        printf("\n\tValor positivo ou Igual a zero!\n");
    printf("\nContinuacao do programa...\n");
    return (0);
}
