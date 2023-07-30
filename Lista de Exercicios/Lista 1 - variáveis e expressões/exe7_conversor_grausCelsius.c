#include <stdio.h>
#include <stdlib.h>
/*
7. Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
A fórmula de conversão é: C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius
e F a temperatura em Fahrenheit.
*/
int main(void){
    float grausFahrenheit, conversorCelsius;

    printf("\nDigite o valor em Fahrenheit");
    scanf("%f",&grausFahrenheit);

    conversorCelsius = (5.0 * (grausFahrenheit - 32.0)/9.0);
    printf("\nO valor em celsius: %.2f",conversorCelsius);
    return 0;
}