#include <stdio.h>
#include <stdlib.h>

// 4.29) Escreva um programa para ler uma temperatura em graus Celsius, 
// calcular e escrever o valor correspondente em graus Fahrenheit.
// ℉ = ℃ × 1,8 + 32
int main(void) {
    float temp_GrausCelsius = 0, temp_GrausFahrenheit = 0;

    printf("Digite o valor da temperatura em graus Celsius: ");
    scanf("%f",&temp_GrausCelsius);

    temp_GrausFahrenheit = temp_GrausCelsius * 1.8 + 32;
    printf("valor correspondente em graus Fahrenheit %f ",temp_GrausFahrenheit);
    return (0);
}