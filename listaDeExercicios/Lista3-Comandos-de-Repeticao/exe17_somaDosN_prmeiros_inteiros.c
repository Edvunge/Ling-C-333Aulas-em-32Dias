#include <stdio.h>
#include <stdlib.h>

/*
17. Faça um programa que leia um número inteiro positivo n e calcule a soma dos n primeiros
números naturais.
*/

int main(void){
    int i, num, soma;

    printf("\ndigite um numero inteiro qualquer: ");
    scanf("%d",&num);

    for(i = 1; i <= num; i++){
        soma = soma + num;
    }

    printf("o valor da nom de N e: %d\n",soma);
    return (0);
}