#include <stdio.h>
#include <stdlib.h>

/*
              Aula 07
        lendo caracteres
        fun��o getchar()
*/

int main() {

	char letra;
	
	printf("insira uma letra: ");
	letra = getchar();
	
	printf("Caracter lido: %c\n", letra);
	return 0;
}
