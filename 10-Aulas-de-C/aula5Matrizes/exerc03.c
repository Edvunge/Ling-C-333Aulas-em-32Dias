/*
3. Crie um programa que armazene dados inteiros em uma matriz de ordem 5 e
imprima: Todos os elementos que se encontram em posições cuja linha mais
coluna formam um número par.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS  5
#define COLUNAS 5

int main(void) {
    int matNum[5][5];
    int mat[LINHAS][COLUNAS];
    int num = 0;

    srand(time(NULL));

    // Gerar números aleatórios para cada elemento da matriz
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            mat[i][j] = rand() % 100;  
        }
    }


    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            num = (i + j);
            if (num % 2 == 0) {
                printf(" %d ",matNum[i][j]);
            }
        }
    }
    return (0);
}