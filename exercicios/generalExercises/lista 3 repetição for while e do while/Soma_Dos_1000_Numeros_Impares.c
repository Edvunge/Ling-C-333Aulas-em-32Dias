#include <stdio.h>
#include <stdlib.h>

/*
	3) Fa�a um programa que some os n�meros �mpares entre 1 e 1000 e imprima a resposta.
*/

int main() {
	
	int num, soma = 0;  
	
	for(num = 1; num <= 1000; num++){
		if(num % 2 == 1){
			soma += num;	
		}
	}
	printf("\nO resultado da soma dos numeros impares de 1 a 1000 e de: %d ",soma);
	return 0;
}
