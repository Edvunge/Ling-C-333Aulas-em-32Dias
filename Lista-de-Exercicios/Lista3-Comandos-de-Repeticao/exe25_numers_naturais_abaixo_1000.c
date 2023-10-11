#include <stdio.h>
#include <stdlib.h>

/*
25. Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos
de 3 ou 5.
*/

int main(void){
    int num = 0, soma;

    while(num < 1000){
            if( (num % 3 == 0) || (num % 5 == 0) ) {
                soma = soma + num;
            }
        num++;
    } 

    printf("O resultado da soma de todos os numeros naturais\n"); 
    printf("menores que 1000 que sao divisiveis por 3 ou 5 e: %d\n", soma);
    return (0);
}