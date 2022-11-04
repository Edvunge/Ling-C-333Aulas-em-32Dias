#include <stdio.h>
#include <stdlib.h>

/*
              Aula 09
        lendo caracteres
        função fgetC() -> f de file
*/

int main() {

	char letra;
	
	printf("insira uma letra: ");
	letra = fgetc(stdin);
	
	printf("Caracter lido: %c\n", letra);
	return 0;
}
