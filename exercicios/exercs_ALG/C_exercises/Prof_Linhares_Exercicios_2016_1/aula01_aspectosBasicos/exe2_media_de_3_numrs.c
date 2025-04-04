#include <stdio.h>
#include <stdlib.h>
/*
2. Fazer um programa para receber 3 valores inteiros do usuário e mostrar a sua média (que
pode não ser inteira).
*/
int main(void){
    double not1, not2, not3, media;

    printf("\nDigite a primeira nota:");
    scanf("%lf",&not1);

    printf("\nDigite a segunda nota:");
    scanf("%lf",&not2);

    printf("\nDigite a terceira nota:");
    scanf("%lf",&not3);

    media = (not1 + not2 + not3)/3;

    printf("\nA media e de: %.2lf",media);
    return (0);
} 