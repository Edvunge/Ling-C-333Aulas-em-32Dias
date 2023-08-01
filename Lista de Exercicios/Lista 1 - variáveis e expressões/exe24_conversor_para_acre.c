#include <stdio.h>
#include <stdlib.h>
/*
24. Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A
fórmula de conversão é: A = M ∗ 0, 000247, sendo M a área em metros quadrados e A
a área em acres.
*/
int main(void){
    float areaEmMetrosQuadrados, conversorDeAcres;

    printf("\nDigite o valor da area em metros quadrados.");
    scanf("%f",&areaEmMetrosQuadrados);
    
    conversorDeAcres = (areaEmMetrosQuadrados * 0.000247);
    printf("\nO valor convertido em acres e de %.3f",conversorDeAcres);
    return 0;
}