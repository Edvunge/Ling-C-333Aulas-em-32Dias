#include <stdio.h>
#include <stdlib.h>

/*
	Faça um algoritmo que leia dois numeros e informa
	qual o maior valor.
*/
int main() {
	
	int num1, num2;
	
	printf("Digite um numero? ");
	scanf("%d",&num1);
	
	printf("Digite um outro numero? ");
	scanf("%d",&num2);
	
	if(num1 > num2){
		printf("O num1 %d e o maior.",num1);
	} else {
		printf("O num2 %d e o maior.",num2);
	}
	return 0;
} 
