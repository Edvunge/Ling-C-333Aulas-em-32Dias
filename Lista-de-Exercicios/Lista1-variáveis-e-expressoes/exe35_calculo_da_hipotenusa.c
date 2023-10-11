#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
35. Sejam a e b os √ catetos de um triângulo, onde a hipotenusa é obtida pela equação:
hipotenusa = a2 + b2 . Faça um programa que receba os valores de a e b e calcule
o valor da hipotenusa através da equação. Imprima o resultado dessa operação.
*/
int main(void){

    float cateto_oposto, cateto_adjacente, hipotenusa, /*raiz,*/ num;

    printf("\nDigite o valor do cateto oposto");
    scanf("%f",&cateto_oposto);

    printf("\nDigite o valor do cateto adjacente");
    scanf("%f",&cateto_adjacente);

    num = ((cateto_oposto*cateto_oposto)+(cateto_adjacente*cateto_adjacente));
    hipotenusa = sqrt(num);

    printf("\nO valor da hipotenusa e de %.2f",hipotenusa);
    return 0;
}