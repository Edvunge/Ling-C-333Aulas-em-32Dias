#include <stdio.h>
#include <stdlib.h>

//              Aula 67: Estrutura de Repeticação - WHILE

int main(void) {
    int valor = 0;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &valor);

    while (valor <= 0){
       printf("Valor invalido! Digite um valor maior que zero: ");
       scanf("%d", &valor); 
    }
    
    printf("Valor lido: %d\n\n", valor);
    return (0);
} 