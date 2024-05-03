#include <stdio.h>
#include <stdlib.h>
/*
16. Leia um valor de comprimento em polegadas e apresente-o convertido em centı́metros.
A fórmula de conversão é: C = P ∗ 2, 54, sendo C o comprimento em centı́metros e P o
comprimento em polegadas.
*/
int main(void){
    float polegadas, conversorEmCentimetros;

    printf("\nDigite o valor em polegadas.");
    scanf("%f",&polegadas);

    conversorEmCentimetros = (polegadas * 2.54);
    printf("\nO valor convertido em centimetros e de %.2f",conversorEmCentimetros);
    return 0;
}