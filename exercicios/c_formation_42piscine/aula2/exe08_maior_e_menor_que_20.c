#include <stdio.h>
#include <stdlib.h>

/*
8. Faça um programa que leia um número e imprima uma das mensagens: 
"Maior do que 20", "Igual a 20"ou "Menor do que 20".
*/

int main(void){
	
	int num;

	printf("\nDigite um valor, qualquer.");
	scanf("%d",&num);

	if(num > 20){
		printf("\nMaior do que 20");
	} else 
		if(num < 20){
			printf("\nMenor do que 20");
		} else {
			printf("\nNumero Igual a 20");

		}	

        return (0);
}

