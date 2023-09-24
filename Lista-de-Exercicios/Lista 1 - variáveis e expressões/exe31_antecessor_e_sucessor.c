#include <stdio.h>
#include <stdlib.h>
/*
31. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
*/
int main(void){
    int num, antecessor, sucessor;

    printf("\nDigite um numero inteiro:");
    scanf("%d",&num);

    antecessor = num - 1;
    sucessor   = num + 1;

    printf("\nO antecessor e %d",antecessor);
    printf("\nO sucessor e %d",sucessor);
    return 0;
}