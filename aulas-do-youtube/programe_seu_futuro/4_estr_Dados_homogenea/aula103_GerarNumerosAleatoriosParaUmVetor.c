#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Aula 103: Como gerar numeros aleatorios para preencher um vetor?

int main(void) {
    int j;
    int num2[10]; 
    
    srand(time(NULL));

    for(j = 0; j < 10; j++) {
        num2[j] = rand();
    }

    printf("\n\n");

    for(j = 0; j < 10; j++){
        printf("%d ",num2[j]);
    }
    return (0);
}