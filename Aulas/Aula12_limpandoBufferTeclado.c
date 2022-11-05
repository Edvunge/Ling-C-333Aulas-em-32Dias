#include <stdio.h>
#include <stdlib.h>

/*
			Aula 12
			ler caracteres
*/

int main() {

 	char a, b;
 	
 	printf("Digite duas letras:");
 	scanf("%c %c", &a, &b);
 	
 	// espaço entre os %C -> comando para o pc desconsiderar o enter, tab ou espaço
 	// buffer
 	
 	printf("a primeira letra: %c\nsegunda letra: %c\n",a ,b);
 	
	return 0;
}
