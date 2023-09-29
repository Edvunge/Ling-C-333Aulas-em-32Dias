#include <stdio.h>
#include <stdlib.h>

// somar todos os numeros de 0 até 100

int main(void){
    int i, soma = 0;

    for(i = 0; i <= 100; i++){
        soma += i;
    }
    printf("\n%d",soma);
    return (0);
}