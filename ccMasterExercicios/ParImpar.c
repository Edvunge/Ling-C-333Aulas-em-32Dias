#include <stdio.h>
#include <stdlib.h>
/*
Fácil 24 – Escreva um programa em C que recebe um inteiro e diga se é par ou ímpar. 
Use o operador matemático % (resto da divisão ou módulo) e o teste condicional if.
*/
int main(){
    int num;

    printf("insira um numero?");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("par");
    } else {
        printf("Impar");
    }
    return 0;
}