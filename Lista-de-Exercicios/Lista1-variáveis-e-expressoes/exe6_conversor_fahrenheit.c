#include <stdio.h>
#include <stdlib.h>
/*
6. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A fórmula de conversão é: F = C ∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
e C a temperatura em Celsius.
*/
int main(void){
    float grausCelsius, conversorFahrenheit;

    printf("\nInforme o valor em graus celsius: ");
    scanf("%f",&grausCelsius);

    conversorFahrenheit = grausCelsius * (9.0/5.0) + 32.0;

    printf("\nO valor da conversao em fahrenheit: %.2f",conversorFahrenheit);
    return 0;
}