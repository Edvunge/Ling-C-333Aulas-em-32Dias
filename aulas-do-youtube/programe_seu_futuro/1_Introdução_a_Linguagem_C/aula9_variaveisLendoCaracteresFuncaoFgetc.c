#include <stdio.h>
#include <stdlib.h>

/* 
	Aula 9:
	variaveis 
	Lendo caracteres.
	fun��o fgetc();
*/
int main(void) {
	char letra;
	
	printf("Digite um caracter: ");
	letra = fgetc(stdin); 
	
	printf("Caracter digitado: %c\n", letra);
	return 0;
}
