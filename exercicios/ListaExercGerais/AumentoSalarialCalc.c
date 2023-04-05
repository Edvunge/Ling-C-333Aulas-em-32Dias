#include <stdio.h>
#include <stdlib.h>

/*
	Faça um algoritmo que leia o salario de uma pessoa
	e ao final mostre o seu novo salario baseado na tabela abaixo:
	
	Descrição										% Aumento					
	Até 1000.00										15%
	entre 1001.00 e 1500.00							10%
	acima de 1500.00								8%
*/
int main() {
	
	float salario, percentagemSalarial;  

	printf("Digite o valor do seu salario:?");
	scanf("%f",&salario);
	
	if ( salario <= 1000 ){
		percentagemSalarial = (salario * 15)/100; 
		salario = salario + percentagemSalarial;
		printf("O seu salario com o aumento de 15 fica: %.3f\n",salario);
	} else if ( (salario > 1001) && (salario <= 1500)) {
		percentagemSalarial = (salario * 10)/100; 
		salario = salario + percentagemSalarial;
		printf("O seu salario com o aumento de 10 fica: %.3f\n",salario);
	} else {
		percentagemSalarial = (salario * 8)/100; 
		salario = salario + percentagemSalarial;
		printf("O seu salario com o aumento de 8 fica: %.3f\n",salario);
	}
	return 0;
} 
