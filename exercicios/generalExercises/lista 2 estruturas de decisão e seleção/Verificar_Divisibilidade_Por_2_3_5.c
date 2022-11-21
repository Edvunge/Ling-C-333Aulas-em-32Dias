#include <stdio.h>
#include <stdlib.h>

/*
	3) Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por 5, 
	ou se não é divisível por nenhum deles.
*/

int main() {
	
	int num;
	
	printf("\ninsira um numero:?\n");
	scanf("%d",&num);
	
	if( (num % 2 == 0) || (num % 3 == 0) || (num % 5 == 0) ){
		printf("\nSao Divisivel.\n");
	} else {
		printf("\nNao e divisivel por nenhum deles.\n");
	}
	
	return 0;
}
