#include <stdio.h>
#include <stdlib.h>
/*
15. Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão
é: G = R ∗ 180/π, sendo G o ângulo em graus e R em radianos e π = 3.14.
*/
int main(void){
    float grausRadianos, anguloEmGraus;
    const float PI = 3.14;

    printf("\nDigite o valor radianos.");
    scanf("%f",&grausRadianos);

    anguloEmGraus = (grausRadianos*(180/PI));
    printf("\nO valor convertido em graus: %.2f",anguloEmGraus);
    return 0;
}