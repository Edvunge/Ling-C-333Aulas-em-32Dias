#include <stdio.h>
#include <stdlib.h>

/* 
	Aula 8:
	variaveis 
	Lendo caracteres.
	fun��o getc();
*/
int main(void) {
	char letra;
	
	printf("Digite um caracter: ");
	letra = getc(stdin); 
	
	printf("Caracter digitado: %c\n", letra);
	return 0;
}
