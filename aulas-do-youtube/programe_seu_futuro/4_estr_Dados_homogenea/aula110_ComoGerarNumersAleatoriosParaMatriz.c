#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Aula 108: Como alterar o conteudo de uma Matriz? 

int main(void) {
    int i, j;
    int mat1[3][3] = {1,2,3,4,5,6,7,8,9};

    srand(time(NULL)); 
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            mat1[i][j] = rand();
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%5d ", mat1[i][j]);
        }
        printf("\n");
    }
    return (0);
}