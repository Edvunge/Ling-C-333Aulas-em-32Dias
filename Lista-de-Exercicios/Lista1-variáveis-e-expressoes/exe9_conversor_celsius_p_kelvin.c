#include <stdio.h>
#include <stdlib.h>
/*
9. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. 
A fórmula de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e 
K a temperatura em Kelvin.
*/
int main(void){
    float grausCelsius, conversorKelvin;

    printf("\nDigite o valor em celsius");
    scanf("%f",&grausCelsius);

    conversorKelvin = (grausCelsius + 273.15);
    printf("\nO valor convertido e de: %.2f",conversorKelvin);
    return 0;
}