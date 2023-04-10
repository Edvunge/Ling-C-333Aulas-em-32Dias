#include <stdio.h>
#include <stdlib.h>
/*
Intermediário 18. Faça um Programa que peça um número inteiro e determine se ele e par ou ímpar. 
Dica: utilize o operador módulo (resto da divisão). 
*/
int main(){
    int num;

    printf("Digite um numero:");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("PAR");
    } else {
        printf("IMPAR");
    }
    return 0;
}