#include <stdio.h>
#include <stdlib.h>

/*
	Faça um  algoritmo que leia o nome e o salario
	de uma pessoa. Ao final mostre seu novo salario
	baseado na tabela abaixo:
	
	salário
	<= 1500
	 > 1500
	 
	 % de aumento
	 12%
	 10%
*/
int main() {
	
	char nome[20];
	float salario, percentagemSalarial;
	
	printf("Digite o seu nome:? ");
	scanf("%s",&nome);
	
	printf("Digite o seu salario:? ");
	scanf("%f",&salario);

	if(salario <= 1500){
		percentagemSalarial = (salario * 12)/100; 
		salario = salario + percentagemSalarial;
		printf("Com o aumento o seu salario fica: %.3f",salario);  
	} else if(salario > 1500){
		percentagemSalarial = (salario * 12)/100; 
		salario = salario + percentagemSalarial;
		printf("Com o aumento o seu salario fica: %.3f",salario); 
	}
	return 0;
} 
