#include <stdio.h>
#include <stdlib.h>

/*
----------------------
5. Escreva um algoritmo para ler as dimensões de um retangulo (base e altura), 
calcular e escrever a area do retangulo.
----------------------
*/

int main(void){
    double base_b, altura_h, areaDoRetangulo;

    printf("\nDigite o valor da altura: ");
    scanf("%lf",&altura_h);

    printf("\nDigite o valor da base: ");
    scanf("%lf",&base_b);

    areaDoRetangulo = (base_b * altura_h);

    printf("\nA area do retangulo: %.2lf",areaDoRetangulo);
    return (0);
}