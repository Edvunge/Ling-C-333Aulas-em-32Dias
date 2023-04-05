#include <stdio.h>
#include <stdlib.h>

/*
	Faça um algoritmo que determine o volume de uma caixa dágua cilíndrica, sendo que o raio e a altura
	devem ser fornecidos (lidos pelo teclado).
	V = PI * Raio^2 * Altura
*/
int main() {
	
	float raio, altura; 
	float PI = 3.1415;

	printf("Digite o valor do raio:?");
	scanf("%f",&raio);
	
	printf("Digite o valor da altura:?");
	scanf("%f",&altura);
	
	float volumeCilindrico = (PI * (raio * raio) * altura);
	
	printf("\nO valor do volume de uma caixa dAgua cilindrica e: %.2f\n",volumeCilindrico);
	return 0;
} 
