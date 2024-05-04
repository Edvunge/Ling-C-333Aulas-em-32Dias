#include <stdio.h>

int soma();

int main(void){
    soma();
    return (0);
}

int soma() {
    int num1 = 5;
    int num2 = 10;
    int resultado = num1 + num2;

    printf("O resultado da conta contida na funcao soma e: %i\n",resultado);
    return (0);
}