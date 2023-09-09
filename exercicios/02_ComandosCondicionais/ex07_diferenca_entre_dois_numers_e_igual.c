
#include <stdio.h>
#include <stdlib.h>

/*
7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois
números forem iguais, imprima a mensagem Números iguais.
*/

int main(void){
	int num1, num2;
	
	printf("digite o primeiro numero");
	scanf("%d",&num1);

	printf("digite o segundo numero");
	scanf("%d",&num2);

	if(num1 > num2){
		printf("o numeo %d e o maior que %d",num1 ,num2);
	} else if (num2 > num1){
		printf("o numero %d e o maior que %d",num2 ,num1);
	} else {
		printf("os numeros sao iguais");
	}	
	return 0;
}



