#include <stdio.h>
#include <stdlib.h>

// 5. Faça um programa que peça ao usuário para digitar 10 valores e some-os.

int main(void){
    int num = 0, soma;

    while( num <= 10){
        printf("\nDigite o valor:");
        scanf("%d",&num);
        soma += num;
        num++;
    }
    printf("O valor da soma: %d\n",soma);
    return (0);
}