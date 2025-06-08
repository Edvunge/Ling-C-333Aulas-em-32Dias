#include <stdio.h>
#include <stdlib.h>

/*
            Aula 44: Estrutura de Decisao Aninhada          
*/
int main(void) {
    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

     printf("Operador ternario:\n");
    a < 0 ? printf("\n\tValor negativo!\n") : printf("\n\tValor positivo ou igual a zero!\n");

     printf("\n\nIf/Else\n");
    if (a < 0){
        printf("\n\tValor Negativo!\n");
    } else {
        if(a > 0){
            printf("\n\tValor Positivo!\n");
        } else {
            printf("\n\tValor Igual a zero!\n");
        }
    }
    printf("\nContinuacao do Programa...\n");
    return (0);
}