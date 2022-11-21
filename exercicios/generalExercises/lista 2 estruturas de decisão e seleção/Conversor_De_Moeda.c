#include <stdio.h>
#include <stdlib.h>

/*
	4) Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
	de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.
*/

int main() {
	
	int opcao;
	float valor;
	float dolar;
	float convParaReal;
	float real;
	float convParaDolar;
	
	printf("\nEscolha uma opcao:?\n");
	printf("\nInsira: \n1 - Conversao De Real Para Dolar.  \n2 - Conversao De Dolar Para Real.  \n");
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1:
			printf("\nInsira Um valor:\n");
			scanf("%f",&dolar);
        	convParaReal = (dolar * 5.30);
        	printf("O valor resultante da conversao e de: %.2f Reais\n",convParaReal);
			break;
		case 2:
			printf("\nInsira Um valor:\n");
			scanf("%f",&real);
        	convParaDolar = (real * 1);
        	printf("O valor resultante da conversao e de: %.2f Dolares\n",convParaDolar);
			break;
		default:
			printf("Valor Invalido.\n");
			break;
	}
	return 0;
}
