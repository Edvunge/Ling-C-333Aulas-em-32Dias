/* strcpy.c */
#include <stdio.h>
#include <string.h>

int main(void) {
	
	char sCopia[40];
	char sNome[40];

	printf("Entre com seu nome: \n");
	gets(sNome);

	strcpy(sCopia, sNome);
	puts(sCopia);

	return (0);
}
