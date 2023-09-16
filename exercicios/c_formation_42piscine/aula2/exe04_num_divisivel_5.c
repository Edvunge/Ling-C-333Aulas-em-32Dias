#include <stdio.h>
#include <stdlib.h>

/*
4. Faça um programa que leia um número e informe se ele é ou não divisível por 5.
*/

int main(void){
	
	int num;
	
	printf("\nDigite um numero");
	scanf("%d",&num);

	if(num % 5 == 0){
		printf("\ne divisivel por 5");
	} else {
		printf("\nnao e divisivel por 5");
	}	
        return 0;
}

