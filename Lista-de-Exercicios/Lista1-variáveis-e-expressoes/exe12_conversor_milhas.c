#include <stdlib.h>
#include <stdio.h>
/*
12. Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de
conversão é: K = 1, 61 ∗ M , sendo K a distância em quilômetros e M em milhas.
*/
int main(void){
    float milhas, conversorDistancia;

    printf("\nDigite o valor em milhas");
    scanf("%f",&milhas);

    conversorDistancia = (1.61 * milhas);
    printf("o valor convertido em distancia e de: %.2f",conversorDistancia);
    return 0;
}