#include <stdio.h>
#include <stdlib.h>

/*
12. Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem decrescente.
*/

int main(void){
    int N;

    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

    
    if (N < 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
    } else {

        for (int i = N; i >= 0; i--) {
            printf("%d\n", i);
        }
    }

    return (0);
}