#include <stdio.h>
#include <stdlib.h>

/*
	Faça um algoritmo que leia o nome de uma pessoa, leia a idade, leia o salario e ao final 
	mostre na tela o nome, idade e mostre também o salário com aumento de 30%
*/
int main() {
	
	char nome[70];
	int idade;
	float salario;

	printf("Digite o seu nome:? ");
	scanf("%s",&nome);
	
	printf("Digite a sua idade:? ");
	scanf("%d",&idade);
	
	printf("Digite o seu salario:? ");
	scanf("%f",&salario);
	
	float percentagemSalarial = (salario * 30)/100; 
	salario = salario + percentagemSalarial; 
	
	printf("o seu nome e: %s\n",nome);
	printf("A sua idade e: %d\n",idade);
	printf("O salario com a percentagem de aumento: %.2f\n",salario);
	return 0;
} 
