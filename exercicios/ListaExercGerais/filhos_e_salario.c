#include <stdio.h>
#include <stdlib.h>

/*
	Exercício 3
 	Escrever um algoritmo que lê o nome de um funcionário, o número de horas trabalhadas, o valor que
	recebe por hora e o número de filhos. Com estas informações, calcular o salário deste funcionário, sabendo
	que para cada filho, o funcionário recebe 3% a mais, calculado sobre o salário bruto.
	
	4 X 3% = 12% 
	N x A = PA
	onde 
	N = numero de filhos
	A = aumento %
	PA = percentagem de aumento
*/
int main() {
	
	char nomeFuncionario[40];
	float numeroHorasTrabalhadas, salarioPorHora, salarioBruto, percentagemSalarial;
	int numeroDeFilhos, aumento = 3, percentagemDeAumento, calculoDoAumento;
	
	printf("Insira o seu nome:?");
	scanf("%s",&nomeFuncionario);
	
	printf("Digite o numero de horas trabalhadas:?");
	scanf("%f",&numeroHorasTrabalhadas);
	
	printf("Insira o valor do seu salario por hora:?");
	scanf("%f",&salarioPorHora);
	
	printf("Digite o numero de filhos:?");
	scanf("%d",numeroDeFilhos);
	
	// calculo do salário Bruto
	salarioBruto = numeroHorasTrabalhadas * salarioPorHora;
	
	// calculo da percentagem de aumento no salario
	calculoDoAumento = numeroDeFilhos * aumento;
	percentagemSalarial = (salarioBruto * calculoDoAumento)/100; 
	percentagemDeAumento = salarioBruto + percentagemSalarial;
	
	printf("O valor do seu salario e de: %d",percentagemDeAumento);
	return 0;
} 
