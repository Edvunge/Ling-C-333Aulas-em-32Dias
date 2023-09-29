#include <stdio.h>
#include <stdlib.h>

/*
----------------------
4. Escreva um algoritmo para ler um valor (do teclado)
e escrever (na tela) o seu sucessor e antecessor.
----------------------
*/

int main(void){
    int valor, sucessor, antecessor;

    printf("\nDigite um valor: ");
    scanf("%d",&valor);

    sucessor   = valor + 1;
    antecessor = valor - 1;

    printf("\nDo valor %d o seu sucessor e: %d ",valor ,sucessor);
    printf("\nDo valor %d o seu antecessor e: %d ",valor ,antecessor);
    return (0);
}