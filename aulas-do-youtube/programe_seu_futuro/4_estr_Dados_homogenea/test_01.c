#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Aula 104: Como gerar numeros aleatorios dentro de um intervalo?

int main(void) {
    int j;
    int num2[10]; 

    //for(j = 0; j < 10; j++) {
        for(int i = 0; i < 10; i++){
            num2[i] = i+1;
        }
    //}

    printf("\n\n");

    for(j = 0; j < 5; j++){
        printf("%d ",num2[j]);
    }
    return (0);
}