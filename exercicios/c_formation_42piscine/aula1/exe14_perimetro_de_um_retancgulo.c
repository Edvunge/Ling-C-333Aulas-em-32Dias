#include <stdio.h>
#include <stdlib.h>

/*
14. Faça um programa em C que leia a base e a altura de um retângulo e imprima o
perímetro (base + altura) e a área (base * altura).
*/

int main(void){

	double base, altura, area, perimetro;

	printf("\nDigite o valor da base");
	scanf("%lf",&base);

	printf("\nDigite o valor da altura");
        scanf("%lf",&altura);

	area      = (base * altura);
	perimetro = (base + altura);

	printf("\nO valor da area: %.2lf",area);
	printf("\nO valor do perimetro: %.2lf",perimetro);
	
        return 0;
}

