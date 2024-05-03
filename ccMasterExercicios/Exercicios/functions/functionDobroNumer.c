#include <stdio.h>
#include <stdlib.h>
// 1. Crie uma funcao que recebe como parametro um numero inteiro e devolve o seu dobro.

void functionDobroNumber(int number){
    printf("\nO numero %d e o seu dobro e: %d",number , number*number);
}

int main(void){
    functionDobroNumber(2);

    return 0;
}