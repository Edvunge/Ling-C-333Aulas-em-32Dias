#include <stdlib.h>
#include <stdio.h>
/*
Fácil  1 – Faça um programa que receba um número e 
usando laços de repetição calcule e mostre a tabuada desse número.
*/
int main(){
    int num, i;

        printf("\nDigite um numero:?");
        scanf("%d",&num);

        for(i = 0; i <= 12; i++){
            printf("\n%d X %d = %d",i,num ,i*num);
        }
    return 0;
}