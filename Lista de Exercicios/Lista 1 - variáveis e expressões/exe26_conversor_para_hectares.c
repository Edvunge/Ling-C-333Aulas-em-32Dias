#include <stdio.h>
#include <stdlib.h>
/*
26. Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares.
A fórmula de conversão é: H = M ∗ 0, 0001, sendo M a área em metros quadrados e H
a área em hectares.
*/
int main(void){
    float areaEmMetrosQuadrados, convertidoEmAreasHectares;
    
    printf("\nDigite o em areas por metros quadrados.");
    scanf("%f",&areaEmMetrosQuadrados);
    
    convertidoEmAreasHectares = (areaEmMetrosQuadrados * 0.0001);
    printf("\nO valor convertido em areas e hectares e de %.2f",convertidoEmAreasHectares);
    return 0;
}