#include <stdio.h>
#include <stdlib.h>

/*
Aula 45: Operador Ternario Aninhado
*/
int main() {

    int num;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    num < 0 ? printf("Negativo!") : num > 0 ? printf("Positivo!") : printf("Igual a zero!");
    
    return 0;
}