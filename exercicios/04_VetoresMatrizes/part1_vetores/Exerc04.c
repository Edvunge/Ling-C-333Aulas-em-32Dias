#include <stdio.h>
#include <stdlib.h>
// 4. Faça um programa que leia um vetor de 8 posições e, em seguida, 
// leia também dois valores X e Y quaisquer correspondentes 
// a duas posicoes no vetor. 
// Ao final seu programa deverá escrever a soma dos valores 
// encontrados nas respectivas posiçoes X e Y.

int main(void) {
    int vet[8] = {12, 13, 14, 15, 16, 17, 18, 19};
    int x = vet[2]; 
    int y = vet[7];

    // soma dos valores (x+y)
    int soma = x + y;
    printf("Soma vet[x] %d + vet[y] %d = %d ",vet[2] ,vet[7] ,soma);
    return (0);
}