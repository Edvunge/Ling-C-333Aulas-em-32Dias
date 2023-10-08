#include <stdio.h>
#include <stdlib.h>

/*
16. Faça um programa que leia um número inteiro positivo ı́mpar N e imprima todos os
números ı́mpares de 1 até N em ordem decrescente.
*/

int main(void){
    int i, num, N;

    printf("Digite um valor inteiro par: ");
    scanf("%d",&num);
    
    if(num % 2 != 0 ){ 
    
        for(i = num; i >= 1; i--) {
            if(i % 2 != 0){
                printf(" %d \n",i);
            }
        }
    } else {
        printf("\nO valor digitado nao par!");
    }
    return (0);
}