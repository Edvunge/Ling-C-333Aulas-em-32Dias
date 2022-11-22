#include <stdio.h>
#include <stdlib.h>

/*
	19. Faca um programa para verificar se um determinado numero inteiro e divisivel por 3 ou
	5, mas nao simultaneamente pelos dois.
*/

int main() {
	
	int num;
	
	printf("\nInsira um numero inteiro:?\n");
	scanf("%d",&num);
	
	// divisibilidade por 5
	if( num % 5 == 0 ){	
		printf("\nO valor e divisivel por 5.");
	} else {
		printf("\nNao e divisivel por 5.");
	} 
	
	// divisibilidade por 3
	if (num % 3 == 0){	
		printf("\nO valor e divisivel por 3.");
	} else {
		printf("\nNao e divisivel por 3.");
	} 
	return 0;
}
