#include <stdio.h>
#include <stdlib.h>
/*
	Exerc�cio 
	
	Escreva um programa que leia um n�mero inteiro. Se o n�mero lido for positivo, escreva uma
	mensagem indicando se ele � par ou �mpar. Se o n�mero for negativo, escreva a seguinte mensagem
	�Este n�mero n�o � positivo�.
*/
int main() {
	
	int num;

	printf("Digite um numero inteiro:?");
	scanf("%d",&num);
	
	if (num < 0){
		printf("Este numero nao e positivo \n");
	} else {
		printf("Este numero e positivo \n");
	}
	return 0;
} 
