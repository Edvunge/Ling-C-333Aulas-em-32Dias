#include <stdio.h>
#include <stdlib.h>

/*
13. Faça um programa que leia um número inteiro positivo par N e imprima todos os números
pares de 0 até N em ordem crescente.
*/

int main(void){
    int i, num, N;

    printf("Digite um valor inteiro par: ");
    scanf("%d",&num);
    
    if(num % 2 == 0 ){ 
    
        for(i = 0; i <= num; i++) {
            if(i % 2 == 0){
                printf(" %d \n",i);
            }
        }
    } else {
        printf("\nO valor digitado nao par!");
    }
    return (0);
}