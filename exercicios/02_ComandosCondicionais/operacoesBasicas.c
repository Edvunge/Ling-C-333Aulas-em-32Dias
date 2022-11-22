#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
	18. Faca um programa que mostre ao usuario um menu com 4 opcoes de operacoes matematicas (as basicas, por exemplo). 
	O usuario escolhe uma das opcoes e o seu programa entao pede dois valores numericos e realiza a operacao, mostrando o resultado e saindo.
*/

int main() {
	
	float num1, num2, sum, subtract, multiplication, division;
	int opcao;
	
	printf("\nEscolha uma operacao matematica: \nDigite ( Soma (1), Subtracao (2) , Multiplicacao (3) , Divisao (4) ) \n");
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1:
			printf("\nInsira o primeiro valor:?\n");
			scanf("%f",&num1);
	
			printf("\nInsira o segundo valor:?\n");
			scanf("%f",&num2);
			
			sum = num1 + num2;
			printf("o resultado da soma e de: %.1f",sum);
		break;
		case 2:
			printf("\nInsira o primeiro valor:?\n");
			scanf("%f",&num1);
	
			printf("\nInsira o segundo valor:?\n");
			scanf("%f",&num2);
			
			subtract = num1 - num2;
			printf("O resultado da subtracao e de: %.1f",subtract);
		break;
		case 3:
			printf("\nInsira o primeiro valor:?\n");
			scanf("%f",&num1);
	
			printf("\nInsira o segundo valor:?\n");
			scanf("%f",&num2);
			
			multiplication = num1 * num2;
			printf("O resultado da multiplicacao e de: %.1f",multiplication);
		break;
		case 4:
			printf("\nInsira o primeiro valor:?\n");
			scanf("%f",&num1);
	
			printf("\nInsira o segundo valor:?\n");
			scanf("%f",&num2);
			
			division = num1 / num2;
			printf("O resultado da divisao e de: %.1f",division);
		break;
		default:
			printf("\nNumero Invalido.");
	}
	return 0;
}
