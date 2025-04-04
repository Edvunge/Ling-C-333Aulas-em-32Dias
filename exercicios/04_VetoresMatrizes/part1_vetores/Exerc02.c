#include <stdio.h>
#include <stdlib.h>

//  Crie um programa que le 6 valores inteiros e, em seguida, 
//  mostre na tela os valores lidos

int main(void) {
    const int LE = 6; 
    int numbers[LE];

    for (int i = 0; i < LE; i++) {
        printf("Digite %dº do numero: ",i);
        scanf("%d",&numbers[i]);
    }

    for (int n = 0; n < LE; n++) {
        printf("POSITION [%d] = %d\n",n ,numbers[n]);
    }
    return (0);
}