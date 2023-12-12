#include <stdio.h>
#include <stdlib.h>

/*
24. Escreva um programa que leia um numero inteiro e 
calcule a soma de todos os divisores
desse numero, com excecao dele proprio. 
Ex: a soma dos divisores do numero 66 e
1 + 2 + 3 + 6 + 11 + 22 + 33 = 78
*/

int main(void) {
    int j = 0, soma = 0, number = 0;

    printf("Digite um numero inteiro: \n");
    scanf("%d",&number);

    for(j = 1; j < number; j++) { 
        if(j % 2 == 0){
            soma += j;
        }
    }
    printf("a soma dos divisores do numero: %d eh %d",number ,soma);
    return (0);
}