#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Aula 149: Funçao que retorna a soma de uma linha da matriz.
int tam = 5;

void imprimir(int m[][5]) {
    int i, j;
    for(i = 0; i < tam; i++) {
        for(j = 0; j < tam; j++) {
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}

// funcao que calcula e retorna a soma de uma linha da matriz
int somarLinha(int x[][5], int l){
    int c, soma = 0;

    for(c = 0; c < tam; c++)
        soma += x[l][c];
    return soma;
}

int main() {
    int mat[5][5];
    int i, j;

   // srand(time(NULL));

    for(i = 0; i < tam; i++) {
        for(j = 0; j < tam; j++) {
            mat[i][j] = rand() % 10;
        }
    }

    imprimir(mat);
    
    for(i = 0; i < tam; i++)
        printf("Soma da linha %d: %d\n",i , somarLinha(mat, 0));
    
    return (0);
}