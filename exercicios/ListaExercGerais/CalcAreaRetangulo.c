#include <stdio.h>
#include <stdlib.h>

/*
	Fa�a um algoritmo que calcule a �rea de um 
	retangulo, solicitando ao usuario o valor 
	da base e da altura. Para fins de c�lculo, a 
	f�rmula da �rea de um retangulo �: a = (b * h) 
*/
int main() {
	
	float baseB, alturaH, areaRetangulo;

	printf("Digite um valor para base:? ");
	scanf("%f",&baseB);
	
	printf("Digite um valor para altura:? ");
	scanf("%f",&alturaH);
	
	areaRetangulo = (baseB * alturaH);
	printf("O valor da area do retangulo: %.2f",areaRetangulo);
	return 0;
} 
