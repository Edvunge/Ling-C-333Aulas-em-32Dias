#include <stdio.h>
#include <stdlib.h>
/*
7) Faça um programa que peça ao usuário um caracter e 
diga se é uma vogal ou não.
*/

int main(void) {
    char vogal;

    printf("Digite a letra: \n");
    scanf(" %c", &vogal); 

    switch (vogal) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("É UMA VOGAL.");
        break;
    default:
        printf("NÃO É VOGAL.");
        break;
    }
    return 0;
}