#include <stdio.h>
#include <stdlib.h>
/*
11. Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilômetros por hora). A fórmula de conversão é: K = M ∗ 3.6, sendo K a velocidade
em km/h e M em m/s.
*/
int main(void){
    float metrosPorSegundo, conversorKiloPorHora;

    printf("\nDigite os metros por segundo:");
    scanf("%f",&metrosPorSegundo);
    
    conversorKiloPorHora = (metrosPorSegundo * 3.6);
    printf("\nO valor convertido e de: %.2f",conversorKiloPorHora);
    return 0;
}