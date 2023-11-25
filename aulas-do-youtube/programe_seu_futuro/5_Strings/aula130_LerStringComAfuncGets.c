#include "stdio.h"
#include "stdlib.h"

/*
    Aula 130: Lendo uma string com a função gets()
*/

int main(void) {
    char palavras[55] = {"oi. Vamos aprender a programar em C?"};

    printf("Digite o seu nome: ");
    //scanf("%55[^\n]", palavras);
    gets(palavras);

    printf("%s\n\n",palavras);
    return (0);
}