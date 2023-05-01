#include <stdio.h>
#include <stdlib.h>
/*
Escreva um programa que peça ao usuário para inserir uma quantia em dólares e centavos e, em seguida, exiba o
valor com 5% de imposto adicionado:

enter an amount: 100.00 / 
with tax added: $105.00
*/
int main(void) {
	
	float value, tax = 5;
	
	printf("Enter an amount: ");
	scanf("%f",&value);
	
	value = value + tax;
	printf("With tax added: $%.2f",value);
	return 0;
}
