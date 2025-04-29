#include <stdio.h>
#include <stdlib.h>

// 3.  Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
// Exemplo: Para n=4 a saída deverá ser 1,3,5,7.

int main(void) {
    int n;

    printf("Digite um numero inteiro positivo...: ");
    scanf("%d", &n);
    
    for(int j = 0; j <= n; ++j) {
        if (j % 2 != 0) {  
            printf(" %d ", j);
        }       
    }
    
    printf("\nN: %d ", n);
    return (0);
}
