#include <stdlib.h>
#include <stdio.h>
/*
14. Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão
é: R = G ∗ π/180, sendo G o ângulo em graus e R em radianos e π = 3.14.
*/
int main(void){

    float anguloEmGraus, conversorEmRadiano;
    const float PI_π  = 3.14; 

    printf("\nDigite o valor do angulo");
    scanf("%f",&anguloEmGraus);

    conversorEmRadiano = (anguloEmGraus * (PI_π / 180));
    printf("\nO valor convertido e de: %.2f",conversorEmRadiano);
    return 0;
}