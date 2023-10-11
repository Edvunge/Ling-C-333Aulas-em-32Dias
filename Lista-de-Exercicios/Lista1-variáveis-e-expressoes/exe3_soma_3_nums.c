#include <stdio.h>
#include <stdlib.h>
/*
3. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.
*/
int main(void){
    int num1, num2, num3, soma;

    printf("\nDigite um numero:?");
    scanf("%d",&num1);

    printf("\nDigite o segundo numero:?");
    scanf("%d",&num2);

    printf("\nDigite o terceiro numero:?");
    scanf("%d",&num3);

    soma = num1 + num2 + num3;

    printf("\nO valor da soma e de: %d",soma);

    return 0;
}