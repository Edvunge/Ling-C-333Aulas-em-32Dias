#include <stdio.h>
#include <stdlib.h>


/*
	Fac¸a um programa para ler as dimens˜oes de um terreno (comprimento c e largura l),
bem como o prec¸o do metro de tela p. Imprima o custo para cercar este mesmo terreno
com tela.
*/

int main() {

	float comprimentoC;
	float LarguraL; 
	
	printf("a altura do terreno?\n");
	scanf("%f",&LarguraL);
	
	printf("o valor do comprimento\n");
	scanf("%f",&comprimentoC);
	
	float metrosTela = comprimentoC * LarguraL;
	printf("degrau actual: %.3f\n",metrosTela);
	
	return 0;
}
