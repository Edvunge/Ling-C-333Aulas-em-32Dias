#include <stdio.h>

// b) Escreva um programa que leia duas strings e as coloque na tela,
// Imprima tambem a segunda letra de cada string.

int main(void) {
    char str1[20], str2[20];

    printf("\nDigite a primeira string: ");
    fgets(str1, 20, stdin);

    printf("\nDigite a segunda string: ");
    fgets(str2, 20, stdin);

    printf("\nA primeira string: %s",str1);
    printf("\nA segunda string: %s",str2);
    printf("\nA segunda letra da primeira string: %c",str1[2]);
    printf("\nA segunda letra da segunda  string: %c",str2[2]);

    return (0);
}