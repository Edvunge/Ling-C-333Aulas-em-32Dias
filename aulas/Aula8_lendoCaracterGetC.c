#include <stdio.h>
#include <stdlib.h>

/*
              Aula 08
        lendo caracteres
        função getC() 
*/

int main() {

	char letra;
	
	printf("insira uma letra: ");
	letra = getc(stdin);
	
	printf("Caracter lido: %c\n", letra);
	return 0;
}
