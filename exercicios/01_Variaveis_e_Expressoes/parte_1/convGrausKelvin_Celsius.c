#include <stdio.h>
#include <stdlib.h>

/*
        8. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
			formula de conversao e: C = K .. 273:15, sendo C a temperatura em Celsius e K a
				temperatura em Kelvin.
*/

int main() {

	float grausKelvin;
	
	printf("insira um valor para graus kelvin: ");
	scanf("%f",&grausKelvin);
	
	float grausCelsius = grausKelvin - 273.15;
	printf("o resultado em graus Celsius e: %f",grausCelsius);
	
	return 0;
}
