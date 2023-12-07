#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/*
Aula 136: Como Comparar duas string com a 
função strcmp?
*/

int main(void) {
    char palavras1[50] = {"Bom dia"};
    char palavras2[50] = {"Bom dia"};

    printf("\n\nResultado: %d\n\n",strcmp(palavras1, palavras2));
    return (0);
}