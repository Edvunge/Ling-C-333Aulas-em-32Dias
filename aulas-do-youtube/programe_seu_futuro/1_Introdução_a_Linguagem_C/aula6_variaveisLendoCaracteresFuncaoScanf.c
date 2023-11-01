#include <stdio.h>
#include <stdlib.h>

/* 
	Aula 6:
	variaveis 
	Lendo caracteres do teclado.
*/
int main(void) {
	char letra;
	// tambem pode ser criado e inicializado imediatamente
	// char letra = 'u';
	
	printf("Digite uma letra: ");
	scanf("%c", &letra); 
	
	printf("valor da minha variavel: %c",letra);
	return 0;
}
