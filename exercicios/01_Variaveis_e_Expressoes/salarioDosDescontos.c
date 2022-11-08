#include <stdio.h>
#include <stdlib.h>


/*
	41. Fac¸a um programa que leia o valor da hora de trabalho (em reais) e n´umero de horas
trabalhadas no mˆes. Imprima o valor a ser pago ao funcion´ ario, adicionando 10% sobre
o valor calculado.
*/

int main() {

	float valorHoras;
	int numDiasTRAB;
	float salario; 
	
	printf("o numero de dias trabalhados\n");
	scanf("%d",&numDiasTRAB);
	
	printf("o valor Horas trabalhadas\n");
	scanf("%f",&valorHoras);
	
	salario = (valorHoras*numDiasTRAB);
	
	float aumento = 5;
	float desconto = 7;
	
	float percentagem = ( salario * aumento / 100 );
	float salarioDepoisDosAumentos = salario  + percentagem;
	
	float percentagemDesc = ( salario * desconto / 100 );
	float salarioDepoisDosDescontos = salarioDepoisDosAumentos  - percentagemDesc;
	
	printf("o valor a ser pago e de: %.2f\n",salarioDepoisDosDescontos);
	
	return 0;
}
