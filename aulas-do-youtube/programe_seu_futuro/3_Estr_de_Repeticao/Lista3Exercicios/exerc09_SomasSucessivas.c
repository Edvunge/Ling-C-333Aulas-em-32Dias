#include <stdio.h>
#include <stdlib.h>

/*
9) Faça um programa que calcule o valor de A, dado por:
A = 1 + 2 + 3 + 4 + ... + n, 
onde n é um número inteiro, maior que zero informado pelo usuário.
*/

int main(void) {
    int i, n, soma = 0, a = 0;

    printf("Digite o valor: N\n");
    scanf("%d",&n);

    for(i = 1; i <= n; i++){
        soma += i;
    }

    a = soma;
    printf("%d\n",a);

    return 0;
}