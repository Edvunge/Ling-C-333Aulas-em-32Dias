#include <stdio.h>
#include <stdlib.h>

/*
2. Faça um programa em C que leia dois valores inteiros e efetue a adição. Caso o
valor somado seja maior que 20, este deverá ser apresentado somando-se a ele
mais 8, caso o valor somado seja menor ou igual a 20, este deverá ser apresentado
subtraindo-se 5.
*/
int main(void){
    int num1, num2, soma;

    printf("\nDigite o valor do primeiro numero:");
    scanf("%d",&num1);

    printf("\nDigite o valor do segundo numero:");
    scanf("%d",num2);

    soma = (num1 + num2);
    
    if(soma > 20){
        soma = soma + 8;
            if (soma <= 20){
              printf("\nO valor da soma: %d ",soma - 5);  
            }
    }
    return (0);
}