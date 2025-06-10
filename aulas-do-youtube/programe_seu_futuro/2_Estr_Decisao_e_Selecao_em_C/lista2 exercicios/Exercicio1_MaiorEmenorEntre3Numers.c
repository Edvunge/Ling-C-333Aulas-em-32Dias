#include <stdio.h>
#include <stdlib.h>

/*
1) Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.
*/

int main(void) {
    int num, num2, num3;

    printf("Digite tres numeros inteiros: ");
    scanf("%d%d%d", &num, &num2, &num3);

    if (num > num2 && num > num3 || num2 > num3){
        printf("\n Num1: %d - Num2: %d - Num3: %d ",num ,num2, num3);
    } else if (num == num2 && num > num3 ){
        printf("\n Num2: %d - Num: %d - Num3: %d ",num2 ,num, num3);
    } else if (num3 == num2 && num > num3){
        printf("\n Num: %d - Num3: %d - Num2: %d ",num ,num2, num3);
    } else if (num2 > num && num2 > num3 || num > num3){
        printf("\n Num2: %d - Num1: %d - Num3: %d ",num2 ,num, num3);
    } else if (num3 > num2 && num3 > num || num2 > num){
        printf("\n Num3: %d - Num2: %d - Num: %d ",num3 ,num2, num);
    } else if (num3 > num2 && num3 > num || num > num2){
        printf("\n Num3: %d - Num2: %d - Num: %d ",num3 ,num, num2);
    } 
    return (0);
}