#include <stdio.h>
#include <stdlib.h>
/*
2) Escreva um programa em C que lê 5 números inteiros, um por vez. 
Conte quantos destes valores
são negativos e quantos são positivos. 
Ao final, imprima na tela a quantidade de números negativos
e positivos.
*/
int main(void) {
    int num1, num2, num3, num4, num5, positivo = 0, negativo = 0;

    printf("Digite o primeiro valor: \n");
    scanf("%d",&num1);

    printf("Digite o segundo valor: \n");
    scanf("%d",&num2);

    printf("Digite o terceiro valor: \n");
    scanf("%d",&num3);

    printf("Digite o quarto valor: \n");
    scanf("%d",&num4);

    printf("Digite o quinto valor: \n");
    scanf("%d",&num5);

    if(num1 > 0 ){
        positivo++;
    } else if (num1 < 0) {
        negativo++;
    }

    if(num2 > 0 ){
        positivo++;
    } else if (num2 < 0) {
        negativo++;
    }

    if(num3 > 0 ){
        positivo++;
    } else if (num3 < 0) {
        negativo++;
    }

    if(num4 > 0 ){
        positivo++;
    } else if (num4 < 0) {
        negativo++;
    }

    if (num5 > 0) {
        positivo++;
    } else if (num5 < 0) {
        negativo++;
    }

    printf("Numero de valores positivos: %d\n", positivo);
    printf("Numero de valores negativos: %d\n", negativo);

    return 0;
}