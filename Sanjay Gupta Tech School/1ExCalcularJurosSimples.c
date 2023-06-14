#include <stdio.h>
#include <stdlib.h>
/*
1. calcular juros simples

J = C · i · t

J ?  juro

C ?  capital

i ?  taxa de juro

t ?  tempo"

*/
int main(void){
	
	float juros = 0, capital, taxaDeJuro, tempo;
	
	printf("insira o capital?\n");
	scanf("%f",&capital);
	
	printf("insira o valor para a taxa de juros?\n");
	scanf("%f", &taxaDeJuro);
	
	printf("insira o valor para o tempo?\n");
	scanf("%f",&tempo);
	
	juros = ( capital * taxaDeJuro * tempo);
	printf("\nO resultado dos juros simples e: %.2f ", juros);
	return 0;
}
