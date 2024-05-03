#include <stdio.h>
#include <stdlib.h>
/*
Fácil 8 - Faça um programa que pergunte o preço de três produtos e 
informe qual produto você deve comprar, 
sabendo que a decisão é sempre o mais barato. 
*/

int main (){
    float prod1, prod2, prod3;

    printf("Digite o valor dos 3 produtos:?");
    scanf("%f %f %f",&prod1 ,&prod2 ,&prod3);

    if( (prod1 < prod2 ) && (prod1 < prod3) ){
        printf("\n%.2f e o produto mais barato.",prod1);
    } else if( (prod2 < prod1 ) && (prod2 < prod3) ){
        printf("\n%.2f e o produto mais barato.",prod2);
    } else if( (prod3 < prod2 ) && (prod1 > prod3) ){
        printf("\n%.2f e o produto mais barato.",prod3);
    } 
    return 0;
}