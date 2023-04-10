#include <stdio.h>
#include <stdlib.h>
/*
	Exercício 
	
	Escreva um programa que leia um número inteiro. Se o número lido for positivo, escreva uma
	mensagem indicando se ele é par ou ímpar. Se o número for negativo, escreva a seguinte mensagem
	“Este número não é positivo”.
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
