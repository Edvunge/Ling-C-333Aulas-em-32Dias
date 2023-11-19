#include <stdio.h>
#include <stdlib.h>

// Aula 100: Como imprimir o conteudo de um vetor?

int main(void) {
    int i;
    int num2[12]   = {8,4,7,9}; 
    char vogais[7] = {'a','e','i','o','u'}; 
    float notas[5] = {1.2, 2.3, 4.3};

    for(i = 0; i < 12; i++) {
        printf("%d ",num2[i]);
    }

    printf("\n");
    for(i = 0; i < 7; i++) {
        printf("%c ",vogais[i]);
    }

    printf("\n\n");
    for(i = 0; i < 5; i++){
        printf("%.2f ",notas[i]);
    }
    return (0);
}