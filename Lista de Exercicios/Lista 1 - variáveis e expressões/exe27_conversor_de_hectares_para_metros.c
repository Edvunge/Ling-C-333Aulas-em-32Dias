#include <stdio.h>
#include <stdlib.h>
/*
27. Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2 .
A fórmula de conversão é: M = H ∗ 10000, sendo M a área em metros quadrados e H
a área em hectares.
*/
int main(void){
    float areaEmHectares, conversorMetrosPorQuadrado;

    printf("\nDigite o valor em area em hectares. ");
    scanf("%f",&areaEmHectares);
    
    conversorMetrosPorQuadrado = (areaEmHectares * 10000);
    printf("\nO valor convertido em metros quadrados e de %.2f",conversorMetrosPorQuadrado);
    return 0;
}