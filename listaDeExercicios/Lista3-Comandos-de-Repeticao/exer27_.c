#include <stdio.h>
#include <stdlib.h>

/*
27. Em Matematica, o numero harmonico designado por H(n) 
define-se como sendo a soma da serie harmonica:
    H(n) = 1 + 1/2 + 1/3 + 1/4 + .  .  . + 1/n
Faca um programa que leia um valor n inteiro e 
positivo e apresente o valor de H(n).
*/

int main(void) {
    int valor_N, x = 0/*int i = 0, j = 0*/;

    printf("Digite o valor de N: \n");
    scanf("%d",&valor_N);

    for(int i = 1; i <= 1; i++){
        //printf("%d",i);
        for(int j = 0; j < valor_N;j++){
            x = (i/j);
            
        }
    }
    printf(" %d ",x);
    return (0);
}