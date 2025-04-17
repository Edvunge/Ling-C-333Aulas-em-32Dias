#include <stdio.h>
#include <stdlib.h>
// 5. Leia um vetor de 10 posições. 
// Contar e escrever quantos valores pares ele possui

int main(void) {

    int vet[10];
    int quantdd_numrs_de_pares = 0;

    for (int x = 0; x < 10; x++) {
        printf("digite o valor para pos[%d]: ",x);
        scanf("%d", &vet[x]);
    }

    for(int u = 0; u < 10; u++) {
        if (vet[u] % 2 == 0) {
            printf("Os valores: %d \n", vet[u]);
            quantdd_numrs_de_pares++; // [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
        }
    }

    printf("Quantidade de Numeros de Pares: %d\n", quantdd_numrs_de_pares);
    return (0);
}
