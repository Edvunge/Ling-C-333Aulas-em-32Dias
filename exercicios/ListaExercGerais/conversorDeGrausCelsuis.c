#include <stdio.h>
#include <stdlib.h>

/*
	4. Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e
	imprime no valor o correspondente em graus Celsius usando as fórmulas que seguem.
	
*/
int main() {
	
	double grausFahrenheit, grausCelsius;
		
/*	printf("Graus Fahrenheit: %f\n",grausFahrenheit);
	printf("Graus Celsius: %f\n",grausCelsius);*/

	printf("Qual e o valor em:");
	scanf("%e", &grausFahrenheit);
	
	// a) Usar uma variável double para ler o valor em Fahrenheit e a fórmula C=(f-32.0) * (5.0/9.0).
	grausCelsius = ( grausFahrenheit - 32.0 ) * ( 5.0 /9.0 );
	printf("O valor convertido em Graus Celsius: %e\n",grausCelsius);
	
	// b) Usar uma variável int para ler o valor em Fahrenheit e a fórmula C=(f-32)*(5/9).
	int grausCelsiusInt = ( grausFahrenheit - 32 ) * ( 5/9 );
	printf("O valor convertido em Graus Celsius: %d\n",grausCelsiusInt);
	
	return 0;
} 
