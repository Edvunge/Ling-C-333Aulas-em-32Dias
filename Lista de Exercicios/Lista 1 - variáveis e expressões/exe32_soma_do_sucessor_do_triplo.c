#include <stdio.h>
#include <stdlib.h>
/*
32. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de
seu dobro.
*/
int main(void){
    int num, soma, SucessorDoTriplo, antecessorDoDobro , sucessor, antecessor;

    printf("\nDigite um valor.");
    scanf("%d",&num);

    antecessor = num - 1;
    sucessor   = num + 1;
    
    soma = ( ( sucessor * sucessor * sucessor ) + (antecessor * antecessor) );
    printf("\nA soma %d",soma);
    return 0;
}