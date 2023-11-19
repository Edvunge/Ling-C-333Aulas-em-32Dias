#include <stdio.h>
#include <stdlib.h>

// Aula 108: Como alterar o conteudo de uma Matriz? 

int main(void) {
    int i, j;
    int mat1[3][3] = {1,2,3,4,5,6,7,8,9}; 
    int mat2[3][3] = {21,22,23,24,25,26,27,28,29};
    int mat3[3][3];
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%2d ", mat3[i][j]);
        }
        printf("\n");
    }
    return (0);
}