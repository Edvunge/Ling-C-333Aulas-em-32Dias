#include <stdio.h>
#include <stdlib.h>

/*
        Aula 39: Decisao Simples
        verificando se um n�mero � negativo
        Brasilia � a capital do Brasil? sim = 1 ou n�o = 0
*/

int main() {

	int a = 10;
	
	printf("\nDigite um valor qualquer: ");
	scanf("%d", &a);
	
	if(a < 0)
		printf("\n\tValor negativo!\n");
	printf("\nContinuacao do programa...\n");
	
	return 0;
}
