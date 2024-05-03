#include <stdio.h>

int somar(int a, int b) {
    int resultado = a + b;
    printf("O resultado e: %i",resultado);
    return (0);
}

int main(void) {
    int num1 = 2;
    int num2 = 4;

    somar(num1, num2);
    return (0);
}