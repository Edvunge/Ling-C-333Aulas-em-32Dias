#include <stdio.h>
#include <stdlib.h>

#define M 4
#define N 3

int main(void) {
	// faça um programa que le e imprime uma matriz 4x3(4linhas e 3 colunas)
	int matriz[M][N];

    // inicializando cada elemento com 0:
    for (int i = 0; i < M; i++) { // linhas 
        for (int j = 0; j < N; j++) { // colunas    
            matriz[i][j] = 0;
        }
    }

    // capturando dados:
    for (int i = 0; i < M; i++) { // linhas 
        for (int j = 0; j < N; j++) { // colunas    
            scanf("%d", &matriz[i][j]);
        }
    }

    // imprimindo o conteudo da matriz
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }    
    return (0);
}