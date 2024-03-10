#include <stdio.h>
#include <stdlib.h>

// Operações Aritméticas (+ - * / %)
//  - Precedência de Operadores

int main(void) {
    int valor1 = 10, valor2 = 11;
    int soma = 0, sub = 0, mult = 0, div = 0, resto = 0;

    // soma +
    soma = valor1 + valor2;

    // sub -
    sub = valor2 - valor1; 

    // mult *
    mult = valor1 * valor2;

    // div /
    div = valor1 / valor2;

    // resto % 
    resto = valor1 % valor2;
    
    printf("resultado: %d + %d = %d\n",valor1 ,valor2 ,soma);
    printf("resultado: %d - %d = %d\n",valor1 ,valor2 ,sub);
    printf("resultado: %d * %d = %d\n",valor1 ,valor2 ,mult);
    printf("resultado: %d / %d = %d\n",valor1 ,valor2 ,div);
    printf("resultado: %d %% %d = %d\n",valor1 ,valor2 ,resto);
    return (0);
}