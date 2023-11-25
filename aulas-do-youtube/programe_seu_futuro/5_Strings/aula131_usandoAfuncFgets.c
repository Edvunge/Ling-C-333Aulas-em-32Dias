#include "stdio.h"
#include "stdlib.h"

/*
    Aula 131: Lendo uma string com a função fgets()
*/

int main(void) {
    char palavras[15] = {"oi. Vamos aprender a programar em C?"};

    printf("Digite o seu nome: ");
    //scanf("%55[^\n]", palavras);
    // gets(palavras);
    fgets(palavras, 15, stdin);

    printf("%s\n\n",palavras);
    return (0);
}