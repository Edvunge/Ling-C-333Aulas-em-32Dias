#include <stdio.h>
#include <stdlib.h>
/*
			Aula 46: Operador lógico de negação !
			tabela verdade 	x    !x
							v    f
							f    v			
*/

int main() {

	int a = 10;
	
	printf("\nDigite um valor qualquer: ");
	scanf("%d", &a);
	
	!(a < 0) ? printf("\n\tValor negativo!\n") : 
		a > 0 ? printf("\n\tValor positivo!\n") : printf("\n\tIgual a zero!\n") ;
	
	
	return 0;
}
