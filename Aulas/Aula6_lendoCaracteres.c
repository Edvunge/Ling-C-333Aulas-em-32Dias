#include <stdio.h>
#include <stdlib.h>

/*
              Aula 06
        lendo caracteres
*/

int main() {

	// tipo nome;
	char sexo = 's';
 	
 	printf("valor da minha variavel: %c\n", sexo);
 	
 	printf("Digite seu sexo: (f, F, m ou M)");
 	scanf("%c", &sexo);
 	
 	printf("valor da variavel sexo: %c\n", sexo);
	return 0;
}
