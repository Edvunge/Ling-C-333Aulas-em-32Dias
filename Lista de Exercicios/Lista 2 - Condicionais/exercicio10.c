#include <stdlib.h>
#include <stdlib.h>
/*
10. Fac¸a um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes formulas (onde h corresponde `a altura):
-  Homens: (72,7 - h) * 58
-  Mulheres: (62,1 - h) * 44,7
*/
int main(void){
    double altura, pesoIdeial;
    char sexo;

    printf("digite a sua altura.");
    scanf("%f",&altura);

    printf("digite o seu sexo: (M) ou (F)");
    scanf("%c",&sexo);

    if(sexo == 'f'){
        pesoIdeial = (72.7 - altura) * 58;
        printf("o peso ideial e de: %f",pesoIdeial);
    } else {
        pesoIdeial = (62.1 - altura) * 44.7;
        printf("o peso ideial e de: %f",pesoIdeial);
    }
    return 0;
}