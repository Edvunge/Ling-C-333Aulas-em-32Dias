#include <stdio.h>
#include <stdlib.h>

/*
2) Escreva um programa em C que lê 5 números inteiros, um por vez. 
Conte quantos destes valores são negativos e quantos são positivos. 
Ao final, imprima na tela a quantidade de números negativos 
e positivos.
*/

int main(void) {

    
    int num, num2, num3, num4, num5;
    int numNeg = 0, numPos = 0;


    printf("Digite o primeiro numero: \n");
    scanf("%d", &num);

    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: \n");
    scanf("%d", &num3);

    printf("Digite o quarto numero: \n");
    scanf("%d", &num4);

    printf("Digite o quinto numero: \n");
    scanf("%d", &num5);

    if(num < 0) {
        numNeg++;
    } else {
        numPos++;
    }

    if(num2 < 0) {
        numNeg++;
    } else {
        numPos++;
    }
    
    if(num3 < 0) {
        numNeg++;
    } else {
        numPos++;
    }
    
    if(num4 < 0) {
        numNeg++;
    } else {
        numPos++;
    }

    if(num5 < 0) {
        numNeg++;
    } else {
        numPos++;
    }

        printf("Primera versao\tNumeros positivos: %d\tNegativos: %d\n", numPos, numNeg);
    return (0);
}