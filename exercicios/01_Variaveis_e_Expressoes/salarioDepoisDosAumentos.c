#include <stdio.h>
#include <stdlib.h>


/*
	42. Receba o sal ´ ario-base de um funcion´ ario. Calcule e imprima o sal ´ ario a receber, sabendose
que esse funcion´ ario tem uma gratificac¸ ˜ao de 5% sobre o sal ´ ario-base. Al ´em disso,
ele paga 7% de imposto sobre o sal ´ ario-base.
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
	
	float aumento = 10;
	
	float percentagemAumento = ( salario * aumento / 100 );
	float salarioDepoisDosAumentos = salario  + percentagemAumento;
	
	printf("adicionando 10 sobre o valor calculado sera: %.2f\n",salarioDepoisDosAumentos);
	
	return 0;
}
