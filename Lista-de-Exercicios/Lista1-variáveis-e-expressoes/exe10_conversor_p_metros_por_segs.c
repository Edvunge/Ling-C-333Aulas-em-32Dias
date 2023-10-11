#include <stdio.h>
#include <stdlib.h>
/*
10. Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s
(metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em
km/h e M em m/s.
*/
int main(void){
    float kilometroPorHora, conversorMetroPorSegundo;

    printf("\nDigite o valor em quilômetros por hora: ");
    scanf("%f",&kilometroPorHora);
    
    conversorMetroPorSegundo = (kilometroPorHora/3.6);
    
    printf("\nO valor convertido e de: %.2f",conversorMetroPorSegundo);
    return 0;
}