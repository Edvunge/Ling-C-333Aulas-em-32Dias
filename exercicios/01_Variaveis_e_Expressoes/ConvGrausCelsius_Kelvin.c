#include <stdio.h>
#include <stdlib.h>

/*
        9. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
			formula de conversao e: K = C + 273:15, sendo C a temperatura em Celsius e K a
				temperatura em Kelvin.
*/

int main() {

	float grausCelsius;
	
	printf("insira um valor para graus celsius: ");
	scanf("%f",&grausCelsius);
	
	float grausKelvin = grausCelsius + 273.15;
	printf("o resultado em graus Kelvin e: %f",grausKelvin);
	
	return 0;
}
