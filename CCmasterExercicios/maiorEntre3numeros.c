#include <stdio.h>
#include <stdlib.h>
/*
Intermediário 6- Faça um programa que leia três números, verifique (usando if e else), 
e mostre o maior deles.  
*/
int main (){
    int num1, num2, num3;

    printf("Digite 3 numeros:?");
    scanf("%d %d %d",&num1 ,&num2 ,&num3);

    if( (num1 > num2 ) && (num1 > num3) ){
        printf("%d e o maior numero",num1);
    } else if( (num2 > num1 ) && (num2 > num3) ){
        printf("%d e o maior numero",num2);
    } else if( (num3 > num2 ) && (num1 < num3) ){
        printf("%d e o maior numero",num3);
    } 
    return 0;
}