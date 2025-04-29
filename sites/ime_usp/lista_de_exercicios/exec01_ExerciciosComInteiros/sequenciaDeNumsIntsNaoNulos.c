#include <stdio.h>
#include <stdlib.h>

// 1.  Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados.

int main(void) {
    int n, quadrd = 0;

    printf("Digite um num inteiro nao nulo que temina em 0: ");
    scanf("%d", &n);

    if (n > 0) {             
        for (int x = 0; x <= n; ++x) {
            quadrd *= x;
        }
    } else {
        printf("O numero digitado eh menor que 0");
        printf("Rode & Compile novamente o exercicio.");
    }

    printf("Os Quadrados de: [ %d ] = %d ",n ,quadrd);
    return (0);
}
