#include <stdio.h>
#include <stdlib.h>
/*
Intermediário 7 - Faça um programa que leia três números, verifique (usando if e else) 
e mostre o maior e o menor deles;  
*/
int main (){
    int num1, num2, num3;

    printf("Digite 3 numeros:?");
    scanf("%d %d %d",&num1 ,&num2 ,&num3);

    // maior entre 3 numeros
    if( (num1 > num2 ) && (num1 > num3) ){
        printf("%d e o maior numero",num1);
    } else if( (num2 > num1 ) && (num2 > num3) ){
        printf("%d e o maior numero",num2);
    } else if( (num3 > num2 ) && (num1 < num3) ){
        printf("%d e o maior numero",num3);
    } 

    // menor entre 3 numeros
    if( (num1 < num2 ) && (num1 < num3) ){
        printf("\n%d e o menor numero",num1);
    } else if( (num2 < num1 ) && (num2 < num3) ){
        printf("\n%d e o menor numero",num2);
    } else if( (num3 < num2 ) && (num1 > num3) ){
        printf("\n%d e o menor numero",num3);
    } 
    return 0;
}