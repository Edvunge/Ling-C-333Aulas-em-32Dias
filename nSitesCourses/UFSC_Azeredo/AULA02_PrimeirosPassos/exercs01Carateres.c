#include <stdio.h>

// a) Escreva um programa que leia um caratere digitado pelo usuario, 
// imprima o caracter digitado e o codigo ASCII correspondete a este caracter.

int main(void) {
    char caractere;

    printf("digite um caractere: ");
    scanf("%c",&caractere);

    printf("\nO caractere lido eh: %c",caractere);
    printf("\nO referente a ele pelo ASCII: %d",caractere);

    return (0);
}