#include <stdio.h>
#include <stdlib.h>


/*
21. Escreva o menu de opcoes abaixo. Leia a opcao do usuario e execute a operacao escolhida.
Escreva uma mensagem de erro se a opcao for invalida.
Escolha a opcao:
	1- Soma de 2 numeros.
	2- Diferenca entre 2 numeros (maior pelo menor).
	3- Produto entre 2 numeros.
	4- Divisao entre 2 numeros (o denominador nao pode ser zero).
	Opcao.
*/

int main() {
	float num1, num2, sum, subtract, multiplication, division;
	int opcao;
	
	printf("\nEscolha uma operacao matematica: \nDigite ( Soma de 2 numeros (1) , Diferenca entre 2 numeros (2) , Produto entre 2 numeros (3) ,  Divisao entre 2 numeros (4) ) \n");
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
			
			if(num1 > num2){
				subtract = num1 - num2;
				printf("O resultado da subtracao e de: %.1f",subtract);
			} else {
				subtract = num2 - num1;
				printf("O resultado da subtracao e de: %.1f",subtract);
			}
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
			
			if(num2 == 0){
				division = num1 / num2;
				printf("O resultado da divisao e de: %.1f",division);
			} else {
				division = num1 / num2;
				printf("O resultado da divisao e de: %.1f",division);
			}	
		break;
		default:
			printf("\nOpcao Invalido.");
	}
	return 0;
}
