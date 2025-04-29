#include <stdio.h>
#include <stdlib.h>

// 2.  Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.

int main(void) {
    int n, somatorio = 0;

    printf("Digite um numero inteiro positivo...: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; ++i) {
        somatorio += i; 
    }
    
    printf("Somatorio: %d ", somatorio);
    return (0);
}
