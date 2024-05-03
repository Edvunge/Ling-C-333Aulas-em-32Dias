#include <stdio.h>
#include <stdlib.h>
/*
4. Leia um número real e imprima o resultado do quadrado desse número.
*/
int main(void){
    float num, quadradoDeUmNumero;

    printf("\nInsira um numero:");
    scanf("%f",&num);

    quadradoDeUmNumero = num * num;
    printf("\nO valor do quadrado de um numero e: %.2f",quadradoDeUmNumero);
    
    return 0;
}