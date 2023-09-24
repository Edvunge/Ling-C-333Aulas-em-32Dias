#include <stdio.h>
#include <stdlib.h>

/*
11. Faça um programa em C que leia dois números reais e calcule as quatro operações
básicas entre estes dois números, adição, subtração, multiplicação e divisão. Ao
final, o programa deve imprimir os resultados dos cálculos.
*/

int main(void){
    double num1, num2, soma, subtraccao, multiplicacao, divisao;

    printf("\nDigite os dois numeros: ");
    scanf("%lf %lf",&num1 ,&num2);

    soma = (num1 + num2);
    subtraccao = (num1 - num2);
    multiplicacao = (num1 * num2);
    divisao = (num1 / num2);

    printf("\nO resultado da soma: %.2lf",soma);

    if(num1 > num2){
        subtraccao = (num1 - num2);
        printf("\nO resultado da subtracao: %.2lf",subtraccao);
    } else {
        subtraccao = (num2 - num1);
        printf("\nO resultado da subtracao: %.2lf",subtraccao);
    }

    printf("\nO resultado da multiplicao: %.2lf",multiplicacao);
    printf("\nO resultado da divisao: %.2lf",divisao);
    return (0);
}