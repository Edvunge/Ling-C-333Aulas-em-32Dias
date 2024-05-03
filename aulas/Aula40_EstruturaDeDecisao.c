#include <stdio.h>
#include <stdlib.h>

/*
        Aula 40: Estrutura de Decisao 
        
*/

int main() {

	int a = 10;
	
	printf("\nDigite um valor qualquer: ");
	scanf("%d", &a);
	
	if(a < 0)
		printf("\n\tValor negativo!\n");
	else
		printf("\n\tValor positivo ou igual a zero!\n"))
	printf("\nContinuacao do programa...\n");
	
	return 0;
}
