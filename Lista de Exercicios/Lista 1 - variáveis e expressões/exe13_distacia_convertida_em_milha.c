#include <stdio.h>
#include <stdlib.h>
/*
13. Leia uma distância em quilômetros e apresente-a convertida em milhas. 
A fórmula de K conversão é: M = 1,61
, sendo K a distância em quilômetros e M em milhas.
*/
int main(void){

    float distanciaEmKilometro, conversorMilhas;

    printf("\nDigite o valor da distancia");
    scanf("%f",&distanciaEmKilometro);

    conversorMilhas = (distanciaEmKilometro / 1.61);
    printf("\nO valor convertido em distacia e de: %.2f",conversorMilhas);
    return 0;
}