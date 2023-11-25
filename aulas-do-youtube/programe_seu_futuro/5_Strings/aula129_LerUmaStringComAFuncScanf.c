#include "stdio.h"
#include "stdlib.h"

/*
    Aula 129: Lendo uma string com a função scanf()
    scanf("%[^\n]", str);
*/

int main(void) {
    char palavras[55] = {"oi. Vamos aprender a programar em C?"};

    printf("Digite o seu nome: ");
    scanf("%55[^\n]", palavras);

    printf("%s\n\n",palavras);
    return (0);
}