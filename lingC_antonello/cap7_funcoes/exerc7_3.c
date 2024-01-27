#include <stdio.h>
#include <stdlib.h>

// 7.3) Faça uma função que recebe um valor inteiro e 
// verifica se o valor é par. 
// A função deve retornar 1 se o número for par e 0 se for ímpar.
int paridadeDaFuncao(int num);

int main(void) {
    paridadeDaFuncao(23);    
    return (0);
}

int paridadeDaFuncao(int num){
    int value = 1, value2 = 0;

    if(num % 2 == 0) {
        return printf(" \n%d ",value);
    } else {
        return printf(" \n%d ",value2);
    }
}