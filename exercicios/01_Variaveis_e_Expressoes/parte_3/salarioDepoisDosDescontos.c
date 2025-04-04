#include <stdio.h>
#include <stdlib.h>


/*
	40. Uma empresa contrata um encanador a R$ 30,00 por dia. Fac¸a um programa que solicite
o n´umero de dias trabalhados pelo encanador e imprima a quantia l´ýquida que dever ´a ser
paga, sabendo-se que s˜ao descontados 8% para imposto de renda.
*/

int main() {

	float valorEncanador = 30.00;
	int numDiasTRAB;
	float salario; 
	
	printf("o numero de dias trabalhados pelo encanador\n");
	scanf("%d",&numDiasTRAB);
	
	salario = (valorEncanador*numDiasTRAB);
	
	float imposto = 8;
	
	float descontoImposto = ( salario * imposto / 100 );
	float salarioDepoisDosDescontos = salario  - descontoImposto;
	
	printf("a quantia liquida que dever a ser paga e de: %.2f\n",salarioDepoisDosDescontos);
	
	return 0;
}
