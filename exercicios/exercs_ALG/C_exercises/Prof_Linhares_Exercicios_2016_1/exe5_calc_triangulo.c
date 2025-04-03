#include <stdio.h>
#include <stdlib.h>

/*
5. Fazer um programa para receber valores inteiros X, Y e Z do usuário e determinar se estes
valores podem formar os lados de um triângulo. Em caso afirmativo, informar se o triângulo
é equilátero, isósceles ou escaleno.

Em relação aos lados dos triângulos, temos a classificação:

Triângulo Equilátero: possui os três lados iguais.
Triângulo Isósceles: possui dois lados iguais, e um diferente.
Triângulo Escaleno: possui os três lados diferentes.
*/

int main(void){
    int x, y, z;

    printf("\nDigite o primeiro lado X");
    scanf("%d",&x);

    printf("\nDigite o segundo lado Y");
    scanf("%d",&y);

    printf("\nDigite o terceiro lado Z");
    scanf("%d",&z);

    if(x == y && x == z){
        printf("\nTriângulo Equilátero");
    } else if(x == y && y != z){
        printf("\nTriângulo Isósceles");
    } else if(y != x && z != x){
        printf("\nTriângulo Escaleno");
    }
    return (0);
}