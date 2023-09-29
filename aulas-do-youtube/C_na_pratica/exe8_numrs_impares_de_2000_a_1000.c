#include <stdio.h>
#include <stdlib.h>

// mostrar todos os numeros impares de 2000 até 1000

int main(void){
    int i;

    for(i = 2000; i > 1000; i--){
        if( ! (i % 2 == 0)) {
            printf("%d\n",i);
        }

    }
    return (0);
}