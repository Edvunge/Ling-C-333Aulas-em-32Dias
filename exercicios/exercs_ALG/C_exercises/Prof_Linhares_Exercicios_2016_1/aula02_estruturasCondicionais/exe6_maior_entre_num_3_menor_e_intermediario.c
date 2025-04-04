#include <stdio.h>
#include <stdlib.h>

/*
6. Fazer um programa que recebe 3 valores não inteiros do usuário e mostra o maior deles, o
menor deles e o valor intermediário.
*/

int main(void){
    double x, y, z;

    printf("\nDigite o primeiro x");
    scanf("%lf",&x);

    printf("\nDigite o primeiro y");
    scanf("%lf",&y);

    printf("\nDigite o primeiro z");
    scanf("%lf",&z);

    if( (x > y &&  x > z) && (y > z) ){
        printf("\nO numero: %.1lf e o maior",x);
        printf("\nO numero: %.1lf e o intermediario",y);
        printf("\nO numero: %.1lf e o menor",z);
    } else if( (y > x &&  y > z) && (z > x) ){
        printf("\nO numero: %.1lf e o maior",y);
        printf("\nO numero: %.1lf e o intermediario",z);
        printf("\nO numero: %.1lf e o menor",x);
    }  else if( (z > x &&  z > y) && (y > x) ){
        printf("\nO numero: %.1lf e o maior",z);
        printf("\nO numero: %.1lf e o intermediario",y);
        printf("\nO numero: %.1lf e o menor",x);
    } else if( z == x &&  z == y ){
        printf("\nOs numeros: %.1lf , %.1lf  e  %.1lf sao iguais",z ,y ,x);
    } 
    return (0);
}