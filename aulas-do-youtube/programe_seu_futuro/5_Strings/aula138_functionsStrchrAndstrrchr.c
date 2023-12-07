
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/*
Aula 138: Procurando caracter em uma String com as funções strchr e strrchr
    strchr  -> retorna a primeira ocorrencia
    strrchr -> retornar a ultima ocorrencia 
*/

int main(void) {
    char palavras[50] = {"abacate"};
    char *letra;

    letra = strchr(palavras, 'a');

    printf("\n%c\n",*letra);
    
    return (0);
}