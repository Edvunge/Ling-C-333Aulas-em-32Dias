#include <stdio.h>
#include <stdlib.h>

/*
        7  Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
				A formula de conversao e: C = 5:0  (F .. 32:0)=9:0, sendo C a temperatura em Celsius
				e F a temperatura em Fahrenheit.
*/

int main() {

	float grausFahrenheit;
	
	printf("insira um valor para graus Fahrenheit: ");
	scanf("%f",&grausFahrenheit);
	
	float grausCelsius = 5.0 * (grausFahrenheit - 32.0) / 9.0;
	printf("o resultado em graus Celsius e: %f",grausCelsius);
	
	return 0;
}
