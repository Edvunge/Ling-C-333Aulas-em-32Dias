#include <stdio.h>
#include <stdlib.h>
/*
	7) Fa�a um programa que pe�a ao usu�rio um caracter e diga se � uma vogal ou n�o.
			
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
