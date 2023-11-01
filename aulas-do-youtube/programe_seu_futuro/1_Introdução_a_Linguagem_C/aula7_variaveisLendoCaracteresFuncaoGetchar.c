#include <stdio.h>
#include <stdlib.h>

/* 
	Aula 7:
	variaveis 
	Lendo caracteres do teclado.
	função getchar();
*/
int main(void) {
	char letra;
	
	printf("Digite um caracter: ");
	letra = getchar(); 
	
	printf("Caracter digitado: %c\n", letra);
	return 0;
}
