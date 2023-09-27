#include <stdio.h>
#include <stdlib.h>

/*
10. Faça um programa em C que leia três números inteiros e imprima os três em
ordem crescente.
*/

int main(void){
    int x, y, z;

    printf("\nDigite o primeiro numero: ");
    scanf("%d",&x);    

    printf("\nDigite o segundo numero: ");
    scanf("%d",&y);

    printf("\nDigite o terceiro numero: ");
    scanf("%d",&z);

    if( (x > y && x > z) && (y > z)){
        printf("\n%d , %d , %d ",z ,y, x);
    } else if( (y > x && y > z) && (x > z)){
        printf("\n%d , %d , %d ",z ,x, y);
    } else if( (z > y && z > y) && (y > x)){
        printf("\n%d , %d , %d ",x ,y, z);
    } else {
        printf("\nOs numeros %d , %d , %d sao iguais",x ,z ,y);
    }
    return (0);
}