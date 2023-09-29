#include <stdlib.h>
#include <stdio.h>

// mostrar todos os numeros pares de 0 até 1000

int main(void){
    int i;

    for(i = 0; i < 1000; i++){
        if(i % 2 == 0){
            printf("\n%d",i);
        }
    }

    return (0);
}