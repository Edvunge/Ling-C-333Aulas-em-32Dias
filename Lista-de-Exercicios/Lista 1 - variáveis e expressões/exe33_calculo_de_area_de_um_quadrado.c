#include <stdio.h>
#include <stdlib.h>
/*
33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
*/
int main(void){
    float lado, areaDeUmQuadrado;

    printf("\nDigite um valor de lado.");
    scanf("%f",&lado);

    areaDeUmQuadrado = (lado * lado);
    printf("\nO valor da area do quadrado e de %.2f",areaDeUmQuadrado);
    return 0;
}