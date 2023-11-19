#include <stdio.h>
#include <stdlib.h>

// Aula 107: Como imprimir o conteudo de uma Matriz? 

int main(void) {
    int i, j;
    int mat1[3][3] = {1,2,3,4,5,6,7,8,9};
    char mat5[3][4] = {'a','b','c','d','e','f','g','h','i','j','k','l'}; 
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", mat5[i][j]);
        }
        printf("\n");
    }
    return (0);
}