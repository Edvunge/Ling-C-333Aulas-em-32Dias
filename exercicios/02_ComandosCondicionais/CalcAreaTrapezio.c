#include <stdio.h>
#include <stdlib.h>

/*
	17. Faca um programa que calcule e mostre a area de um trapezio. Sabe-se que:
	areaTrapezio = (baseMaior + baseMenor) * altura / 2;
	Lembre-se a base maior e a base menor devem ser numeros maiores que zero.
*/

int main() {
	
	float areaTrapezio, baseMaior, baseMenor, altura;
	
	printf("\nInsira um valor para altura:?\n");
	scanf("%f",&altura);
	
	printf("\nInsira um valor para a base maior:?\n");
	scanf("%f",&baseMaior);
	
	printf("\nInsira um valor para a base menor:?\n");
	scanf("%f",&baseMenor);
	
	if( baseMaior > 0 && baseMenor > 0 ){	
		areaTrapezio = (baseMaior + baseMenor) * altura / 2;
		printf("\nO valor da area do trapezio e de: %.2f",areaTrapezio);
	} else {
		printf("\nOs valores da bases sao menor do que zero.");
	}
	return 0;
}
