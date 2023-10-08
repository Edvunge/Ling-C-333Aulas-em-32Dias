#include <stdio.h>
#include <stdlib.h>

/*
8. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor
lido.
*/

int main(void){
    int num, maior, menor;
    
    printf("digite um valor numerico: ");
    scanf("%d", &num);

    maior = num;
    menor = num;

    for(int i = 1; i <= 10; i++){
        printf("\nDigite %d valor: ",i);
        scanf("%d",&num);

        if(num > maior){
            maior = num;
        }

        if(num < menor){
            menor = num;
        }
    }
    
    printf("O menor valor: %d ", menor);
    printf("\nO maior valor: %d ", maior);

    return (0);
}