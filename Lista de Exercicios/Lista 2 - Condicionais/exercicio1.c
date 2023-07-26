#include <stdio.h>
#include <stdlib.h>

/*
1. Faca um programa que receba dois numeros e mostre qual deles e o maior.
*/
int main(void){

    int num1, num2;

    printf("Digite um primeiro numero\n");
    scanf("%d",&num1);

    printf("Digite um segundo numero\n");
    scanf("%d",&num2);

    if(num1 > num2){
        printf("O num %d e maior",num1);
    } else {
        printf("O num %d e  maior",num2);
    }
    return 0;
}