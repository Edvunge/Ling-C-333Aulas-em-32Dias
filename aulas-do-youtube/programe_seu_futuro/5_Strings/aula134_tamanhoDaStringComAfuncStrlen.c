#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/*
Aula 134: Como descubrir o tamanho de uma string com a função strlen?
*/

int main(void) {
    //int tam;
    char palavras[55] = {"Vamos aprender a programar em C?"};

    printf("Digite o seu nome: ");
    //scanf("%55[^\n]", palavras);
    // gets(palavras);
    //fgets(palavras, 15, stdin);
    
    //tam = strlen(palavras);

    printf("Tamanho: %d\n", strlen(palavras));
    return (0);
}