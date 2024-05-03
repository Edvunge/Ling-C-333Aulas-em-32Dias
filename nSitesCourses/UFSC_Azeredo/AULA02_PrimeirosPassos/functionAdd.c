#include <stdio.h>

// escreva uma funcao que some dois inteiros e retorne o valor da soma

int somar(int a, int b){
    int soma = a + b;
    return soma;
}

int main() {
    int soma = somar(3, 4);
    printf("soma: %d",soma);
    return (0);
}