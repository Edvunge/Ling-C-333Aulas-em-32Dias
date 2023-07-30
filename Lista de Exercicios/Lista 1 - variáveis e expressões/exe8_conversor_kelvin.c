#include <stdlib.h>
#include <stdio.h>
/*
8. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
fórmula de conversão é: C = K − 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.
*/
int main(void){
    float grausKelvin, conversorCelsius;

    printf("\nDigite o valor em graus Kelvin:");
    scanf("%f",&grausKelvin);

    conversorCelsius = (grausKelvin - 273.15);

    printf("\nO valor em celsius: %f ",conversorCelsius);
    return 0;
}