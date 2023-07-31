#include <stdio.h>
#include <stdlib.h>
/*
17. Leia um valor de comprimento em centı́metros e apresente-o convertido em polegadas.
C A fórmula de conversão é: P = 2,54
, sendo C o comprimento em centı́metros e P o comprimento em polegadas.
*/
int main(void){
    float comprimetroEmCentimetros, conversor_Em_Polegadas;

    printf("\nDigite o valor em comprimetro Em Centimetros");
    scanf("%f",&comprimetroEmCentimetros);

    conversor_Em_Polegadas = (comprimetroEmCentimetros / 2.54);
    printf("\nO valor convertido em polegadas e de: %.2f",conversor_Em_Polegadas);
    return 0;
}