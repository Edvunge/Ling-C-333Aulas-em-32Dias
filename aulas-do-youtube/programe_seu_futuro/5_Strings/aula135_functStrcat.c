#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/*
Aula 135: Concatenando duas string com a função strcat?
*/

int main(void) {
    char palavras[50] = {"oi."};
    
    strcat(palavras, "Bom dia.");

    printf("\n\t%s\n",palavras);
    return (0);
}