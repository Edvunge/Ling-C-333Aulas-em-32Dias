#include <stdio.h>
#include <stdlib.h>
/*
	7) Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.
			
*/

int main() {

	char letra;
	
	printf("Insira uma letra\n");
	scanf("%c",&letra);
	
	switch(letra){
		case 'a': case 'e':
		case 'i': case 'o':
		case 'u':
			printf("\n\tE UMA VOGAL.\n");
			break;
		case 'b': case 'c': case 'd':
		case 'f': case 'g': case 'h':
		case 'j': case 'k': case 'l':
		case 'm': case 'n': case 'p':
		case 'q': case 'r': case 's':
		case 't': case 'v': case 'w':
		case 'y': case 'z':	
			printf("\n\tNAO UMA VOGAL.\n");
			break;
		default:
			printf("\n\tLetra Invalida.\n");
	}
	return 0;
}
