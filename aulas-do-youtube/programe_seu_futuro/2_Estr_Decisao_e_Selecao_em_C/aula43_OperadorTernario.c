#include <stdio.h>
#include <stdlib.h>

/*
Aula 43: Operador Ternario
*/
int main() {

    int num;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    num < 0 ? printf("Negativo!") : printf("Positivo ou Igual a zero!");
    
    return 0;
}