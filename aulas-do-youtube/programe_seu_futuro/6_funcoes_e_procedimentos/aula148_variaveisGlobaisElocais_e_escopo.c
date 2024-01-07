#include <stdio.h>
#include <stdlib.h>

//      Aula 148: Variaveis Globais e escopo de variaveis.
int idade2 = 35;

void imprimir(int id) {
    printf("Idade: %d\n", id);
    printf("Idade2: %d\n", idade2);
}

int main() {
    int idade = 25;

    printf("\nIdade: %d\n", idade);
    imprimir(idade);

    return (0);
}