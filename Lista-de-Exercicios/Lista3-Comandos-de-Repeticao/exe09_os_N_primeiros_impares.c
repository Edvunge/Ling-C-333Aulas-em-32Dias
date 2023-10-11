#include <stdio.h>
#include <stdlib.h>

/*
9. Faça um programa que leia um número inteiro N e depois imprima os N primeiros
números naturais ı́mpares.
*/

int main(void){
    // 1 passo: imprimir um numero inteiro N
    // 2 passo: imprimir os impares
    // 3 passo: testar
    
    int num, i, N;

    printf("\nDigite um valor por onde quer começar: ");
    scanf("%d",&N);    
    
    printf("\nDigite um valor ate onde quer contar: ");
    scanf("%d",&num);
    
    for(i = N; i <= num; i++) {
        if( i % 2 != 0 ){
            printf(" %d \n",i);
        }
    }
   
    return (0);
}