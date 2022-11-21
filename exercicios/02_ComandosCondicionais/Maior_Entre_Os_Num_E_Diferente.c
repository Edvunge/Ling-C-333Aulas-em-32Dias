#include <stdio.h>
#include <stdlib.h>


/*
6. Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior deles, assim como a diferenca existente entre ambos.
*/

int main() {
	
	int num1, num2;
	
	printf("insira um numero inteiro:?\n");
	scanf("%d%d",&num1,&num2);  
	
	if(num1 > num2){
		printf("O Maior e: %d",num1);
		printf("\nA Diferenca e de: %d",num1 - num2);
	} else {
		printf("A Diferenca e de: %d",num2 - num1);
		printf("\nO Maior e: %d",num2);
	}
	return 0;
}
