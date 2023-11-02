#include <stdio.h>
#include <stdlib.h>

/*
4) Escreva um programa que leia um valor de despesa de restaurante, 
o valor da gorjeta (emporcentagem) 
e o n�mero de pessoas para dividir a conta. 
Imprima o valor que cada um deve pagar.
Assuma que a conta ser� dividida igualmente.
*/

int main(void) {
	float valorDespesa, valGorjeta, valorFinal ,valorAPagarPessoa;
	int numDePessoas;
	
	printf("Digite o valor da despesa: \n");
	scanf("%f",&valorDespesa);
	
	printf("Digite o valor da gorjeta: \n");
	scanf("%f",&valGorjeta);
	
	printf("Digite o numero de pessoas: \n");
	scanf("%d",&numDePessoas);
	
	valorFinal = (valorDespesa * valGorjeta)/100;
	
	valorFinal = valorDespesa + valGorjeta;
	
	valorAPagarPessoa = valorFinal / numDePessoas;
	
	printf("valor a dividir por pessoas: %.2f",valorAPagarPessoa);
	return 0;
}
