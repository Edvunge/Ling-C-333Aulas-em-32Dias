#include <stdio.h>
#include <stdlib.h>
/*
			Aula 44: Decisão Aninhadas
			
*/

int main() {

	int a = 10;
	
	printf("\nDigite um valor qualquer: ");
	scanf("%d", &a);
	
	if(a < 0){
		printf("\n\tValor negativo!\n");
	} else if(a > 0) {
		printf("\n\tValor positivo!\n");
	} else {
		printf("\n\tValor Igual a zero!\n");
	}
	
	
	return 0;
}
