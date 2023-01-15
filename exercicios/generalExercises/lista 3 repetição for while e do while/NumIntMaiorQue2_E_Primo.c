#include <stdio.h>
#include <stdlib.h>
/*
	Faça um programa que peça ao usuário um número inteiro maior que 2 e diga se o número
	informado é primo ou não.
*/
int main() {
	
	int num;
		
	do {
		
	printf("\nInsira um numero:?");
	scanf("%d",&num);
		
		if(num % 2 == 0){
			printf("\nNumero Primo:");
		} else {
			printf("\nNumero Nao e Primo:?");
		}
		
	} while (num < 2);
	return 0;
}
