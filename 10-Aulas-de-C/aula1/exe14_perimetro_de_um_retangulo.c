#include <stdio.h>
#include <stdlib.h>

/*
14. Faça um programa em C que leia a base e a altura de um retângulo e imprima o
perímetro (base + altura) e a área (base * altura).
*/

int main(void){
    double baseB, alturaH ,perimetro ,area;

    printf("\nDigite o valor da base: ");
    scanf("%lf",&baseB);

    printf("\nDigite o valor da altura: ");
    scanf("%lf",&alturaH);

    perimetro = (baseB + alturaH);
    area = (baseB * alturaH);

    printf("\nO valor do perimetro: %.2lf ",perimetro);
    printf("\nO valor da area: %.2lf ",area);
    return (0);
}