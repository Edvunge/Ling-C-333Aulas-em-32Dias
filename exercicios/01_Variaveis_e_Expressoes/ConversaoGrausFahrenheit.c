#include <stdio.h>
#include <stdlib.h>

/*
            6. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
				A formula de conversao e: F = C(9:0=5:0)+32:0, sendo F a temperatura em Fahrenheit
				e C a temperatura em Celsius.
*/

int main() {

	float grausCelsius;
	
	printf("insira um valor para graus Celsius: ");
	scanf("%f",&grausCelsius);
	
	float grausFahrenheit = grausCelsius * (9.0/5.0)+32.0;
	printf("o resultado em graus Fahrenheit e: %f",grausFahrenheit);
	
	return 0;
}
