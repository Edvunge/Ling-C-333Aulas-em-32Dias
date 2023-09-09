#include <stdio.h>
#include <stdlib.h>

/*
10. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
• Homens: (72.7 ∗ h) − 58
• Mulheres: (62, 1 ∗ h) − 44, 7
*/

int main(void){

        float altura, peso_ideial;
        char sexo;

        printf("digite a sua altura");
        scanf("%f",&altura);

        printf("Digite o seu sexo:\n (masculino - M / femenino - F)");
        scanf("%c",&sexo);

        if(sexo == 'm'){
                peso_ideial = (72.7 * altura) - 58;
                printf("\n Sexo Masculino");
		printf("\n O seu peso ideial e de %.2f",peso_ideial);
        } else {
                peso_ideial = (62.1 * altura) - 44.7;
                printf("\n Sexo feminino");
                printf("\n O seu peso ideial e de %.2f",peso_ideial);
        }
        return 0;
}

