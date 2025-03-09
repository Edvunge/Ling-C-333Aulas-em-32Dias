#include <stdio.h>
#include <stdlib.h>

/*
10. Faça um programa em C que leia três números reais e calcule a média aritmética
destes números. Ao final, o programa deve imprimir o resultado do cálculo.
*/

int main(void){
    double x, y, z,mediaAritmetica;

    printf("\nDigite tres numeros: ");
    scanf("%lf %lf %lf",&x ,&y ,&z);

    mediaAritmetica  = (x + y + z)/3;
    
    printf("\nA media aritmetica : %.2lf",mediaAritmetica);
    return (0);
}