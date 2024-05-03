#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Faca uma funcao para verificar se um numero e positivo ou negativo. Sendo que o valor
de retorno sera 1 se positivo, -1 se negativo e 0 se for igual a 0.
*/

void functPositiveOrNegative(int num){
    if(num > 0){
        printf("return 1.\n");
    } else {
        printf("return -1\n");
    }
}

int main(void){
    int seed = time(NULL); 
    srand(seed); 

    int numero = rand() % 2001 - 1000;  

    functPositiveOrNegative(numero);
    return 0;
}