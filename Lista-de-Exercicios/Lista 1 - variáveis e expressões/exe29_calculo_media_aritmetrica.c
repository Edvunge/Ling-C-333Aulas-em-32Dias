#include <stdio.h>
#include <stdlib.h>
/*
29. Leia quatro notas, calcule a média aritmética e imprima o resultado.
*/
int main(void){
    int nota1, nota2, nota3, nota4, mediaAritmetica;

    printf("\nDigite a primeira nota");
    scanf("%d",&nota1);

    printf("\nDigite a segunda nota");
    scanf("%d",&nota1);

    printf("\nDigite a terceira nota");
    scanf("%d",&nota1);

    printf("\nDigite a quarta nota");
    scanf("%d",&nota4);

    mediaAritmetica = ( (nota1 + nota2 + nota3 + nota4) / 4 );
    printf("\nA media aritmetica e de: %d",mediaAritmetica);
    return 0;
}