#include <stdio.h>
#include <stdlib.h>


/*
7. Faca um programa que receba dois numeros e mostre o maior. Se por acaso, os dois numeros forem iguais, imprima a mensagem Numeros iguais.
*/

int main() {
	
	int num1, num2;
	
	printf("insira um numero inteiro:?\n");
	scanf("%d%d",&num1,&num2);  
	
	if(num1 > num2){
		printf("O Maior e: %d",num1);
	} else if (num2 > num1) {
		printf("\nO Maior e: %d",num2);
	} else {
		printf("Numeros iguais");
	}
	return 0;
}
