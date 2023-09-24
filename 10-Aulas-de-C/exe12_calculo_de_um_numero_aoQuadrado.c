#include <stdio.h>
#include <stdlib.h>

/*
12. Faça um programa em C que leia um número real e calcule o quadrado deste
número. Ao final, o programa deve imprimir o resultado do cálculo.
*/

int main(void){
    double num, numeroAOquadrado;

    printf("\nDigite um numero real:");
    scanf("%lf",&num);
    
    numeroAOquadrado = (num*num);

    printf("\nO numero: %.2lf ao quadrado e: %.2lf",num ,numeroAOquadrado);

    return (0);
}
