#include <stdio.h>
#include <stdlib.h>

/*
---------------------
6. Escreva um algoritmo que leia a idade de uma pessoa expressa em anos, 
meses e dias e escreva a idade dessa pessoa expressa apenas em dias, 
considerar ano com 365 dias e mes com 30 dias.
---------------------
*/

int main() {
    int anos, meses, dias;

    
    printf("Digite a idade em anos: ");
    scanf("%d", &anos);
    
    printf("Digite a idade em meses: ");
    scanf("%d", &meses);
    
    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    int idade_em_dias = (anos * 365) + (meses * 30) + dias;

    printf("A idade em dias é: %d dias.\n", idade_em_dias);

    return 0;
}