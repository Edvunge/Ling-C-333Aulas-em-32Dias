#include <stdio.h>
#include <stdlib.h>
/*
Intermediário 9 - Faça um programa que leia três números e mostre-os em ordem decrescente. 
*/
int main (){
    int num1, num2, num3;

    printf("Digite 3 numeros:?");
    scanf("%d %d %d",&num1 ,&num2 ,&num3);

    if( ((num1 < num2 ) && (num1 < num3)) &&  (num2 < num3) ){
        printf("\n%d , %d , %d ",num1 , num2 ,num3);
    } else if( ((num1 < num2 ) && (num1 < num3)) &&  (num3 < num2) ){
        printf("\n%d , %d , %d ",num1 , num3 ,num2);
    } else if( ((num2 < num1 ) && (num2 < num3)) &&  (num1 < num3) ){
        printf("\n%d , %d , %d ",num2 , num1 ,num3);
    } else if( ((num2 < num1 ) && (num2 < num3)) &&  (num3 < num1) ){
       printf("\n%d , %d , %d ",num2 , num3 ,num1);
    } else if( ((num3 < num2 ) && (num3 < num1)) &&  (num1 < num2) ){
       printf("\n%d , %d , %d ",num3 , num1 ,num2);
    } else if( ((num3 < num2 ) && (num3 < num1)) &&  (num2 < num1) ){
       printf("\n%d , %d , %d ",num3 , num2 ,num1);
    } else {
        printf("\nClassificcao indisponivel.");
    }
    return 0;
}