#include <stdio.h>
#include <stdlib.h>
/*
	Aula 107:  como imprimir o conteudo de uma matriz(arrays bidimensionais)?
*/
int main() {

    int i, j, mat1[3][3] = {1,2,3,4,5,6,7,8,9};
    char mat5[3][4] = {'a','b','c','d','e','f','g','h','i','j','k','l'};

    for(i = 0; i < 3; i++){ // �ndice das linhas
        for(j = 0; j < 3; j++)  // �ndice das colunas
            printf("%d ", mat1[i][j]);
        printf("\n");
    }

    printf("\n\n");
    for(i = 0; i < 3; i++){ // �ndice das linhas
        for(j = 0; j < 4; j++) // �ndice das colunas
            printf("%c ", mat5[i][j]);
        printf("\n");
    }

    return 0;
}
