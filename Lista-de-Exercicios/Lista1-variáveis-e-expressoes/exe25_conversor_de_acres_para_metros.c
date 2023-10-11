#include <stdio.h>
#include <stdlib.h>
/*
25. Leia um valor de área em acres e apresente-o convertido em metros quadrados m2 . A
fórmula de conversão é: M = A ∗ 4048, 58, sendo M a área em metros quadrados e A a
área em acres.
*/
int main(void){
    float areasEmAcres, conversorMetrosQuadrados;

    printf("\nDigite o valor da area de acres.");
    scanf("%f",&areasEmAcres);

    conversorMetrosQuadrados = (areasEmAcres * 4048.58);
    printf("\nO valor convertido e de %.4f",conversorMetrosQuadrados);
    return 0;
}