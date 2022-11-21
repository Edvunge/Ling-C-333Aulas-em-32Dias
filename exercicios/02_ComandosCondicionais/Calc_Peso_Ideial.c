#include <stdio.h>
#include <stdlib.h>

/*
10. Faca um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
	peso ideal, utilizando as seguintes formulas (onde h corresponde a altura):
	 	Homens: (72.7 * h) - 58
	 	Mulheres: (62,1 * h) - 44,7
*/

int main() {
	
	float altura, pesoIdeial;
	char sexo;
	
	printf("insira o seu sexo:\n ( (F) feminio ou ( M ) masculino)?\n");
	scanf("%c",&sexo); 
	
	printf("insira a sua altura:?\n");
	scanf("%f",&altura);
	
	if( sexo == 'm' ){
		pesoIdeial = ( 72.2  * altura ) - 58;
		printf("o seu peso ideial e de:\n %.2f",pesoIdeial);
	} else {
		pesoIdeial = ( 62.1 * altura ) - 44.7;
		printf("o seu peso ideial e de:\n %.2f",pesoIdeial);
	}
	return 0;
}
