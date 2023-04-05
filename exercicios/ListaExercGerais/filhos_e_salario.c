#include <stdio.h>
#include <stdlib.h>

/*
	Exerc�cio 3
 	Escrever um algoritmo que l� o nome de um funcion�rio, o n�mero de horas trabalhadas, o valor que
	recebe por hora e o n�mero de filhos. Com estas informa��es, calcular o sal�rio deste funcion�rio, sabendo
	que para cada filho, o funcion�rio recebe 3% a mais, calculado sobre o sal�rio bruto.
	
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
	
	// calculo do sal�rio Bruto
	salarioBruto = numeroHorasTrabalhadas * salarioPorHora;
	
	// calculo da percentagem de aumento no salario
	calculoDoAumento = numeroDeFilhos * aumento;
	percentagemSalarial = (salarioBruto * calculoDoAumento)/100; 
	percentagemDeAumento = salarioBruto + percentagemSalarial;
	
	printf("O valor do seu salario e de: %d",percentagemDeAumento);
	return 0;
} 
