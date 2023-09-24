#include <stdio.h>
#include <stdlib.h>

/*
3. Faça um programa em C que imprima a média aritmética entre os números 5, 8, 12.
*/

int main(void){
    double x = 5, y = 8, z = 12, mediaAritmetica;

    mediaAritmetica = (x + y + z)/3;
    printf("\nA media aritmetica: %.2lf",mediaAritmetica);
    return (0);
}