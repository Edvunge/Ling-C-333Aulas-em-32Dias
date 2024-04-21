#include <stdio.h>

int main(void){
    const int TAM = {100};
    char nome[TAM];

    printf("Informe um nome: ");
    fgets(nome, TAM, stdin);

    fflush(stdin);// limpa a entrada e le a entrada dos dados digitados

    printf("O nome que voce digitou foi: %s",nome);
    return (0);
}