#include <stdio.h>
#include <stdlib.h>

// 4. Crie um programa que calcule a média de três números

int main(void) {
    double num1 = 0, num2 = 0, num3 = 0;

    printf("Digite tres numeros\n");
    scanf("%lf %lf %lf",&num1, &num2, &num3);

    double media = (num1 + num2 + num3)/3;
    printf("\nMedia: %.2lf", media);
    //printf("\nNum1: - %.2lf \nNum2: - %.2lf \nNum3: - %.2lf \n", num1,  num2, num3);
    return (0);
}
