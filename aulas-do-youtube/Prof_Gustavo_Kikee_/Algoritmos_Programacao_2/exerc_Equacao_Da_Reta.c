#include <stdlib.h>
#include <stdio.h>

/*
EXE_01a

calculo de pontos de uma reta
Equacao da reta: y(x) = ax + b

faça um programa que receba do usuario os valores de a e b e em seguida, 
imprima na tela os valores de X e Y no intervalo [0  10]
*/
int main(void) {
    int a = 0, b = 0, y = 0, x = 0;

    printf("Digite o valor de (a) e (b)");
    scanf("%d %d",&a ,&b);

    for(x; x < 11; x++) {
        y = ((a*x) + b);
        printf("Quando X: %d  =>>  Y: %d\n",x,y);
    }
    
    return (0);
}