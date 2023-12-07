#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/*
Aula 137: Copiando string com a 
função strcyp?
*/

int main(void) {
    char palavras1[50] = {"bola"};
    char palavras2[50] = {"abacate"};

    printf("\nAntes de copiar:\nPalavra 1: %s\npalavra2: %s\n",palavras1, palavras2);
    
    strcpy(palavras2, palavras1);

    printf("\nDepois de copiar:\nPalavra 1: %s\npalavra2: %s\n",palavras1, palavras2);
    
    return (0);
}