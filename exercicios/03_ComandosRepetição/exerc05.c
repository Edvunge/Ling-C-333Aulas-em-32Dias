#include <stdio.h>
#include <stdlib.h>

/*
5. Faca um programa que peca ao usuario para digitar 
10 valores e some-os.
*/

int main(void) {
    int valor = 0, h = 0, soma = 0;

    for(h; h <= 10; h++) {
        printf("Digite o %d* valor: \n",h);
        scanf("%d",&valor);
        soma += valor;
    }
    printf("\nO valor da soma: %d\n",soma);
    return (0);
}