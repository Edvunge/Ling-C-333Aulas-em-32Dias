#include <stdio.h>

// 5. Desenvolva um programa que verifique 
// se um número é par ou ímpar

int main(void) {

    int num;

    printf("digite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("numero par");
    } else {
        printf("numero impar");
    }
    return (0);
}
