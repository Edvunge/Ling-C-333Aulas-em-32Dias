#include <stdio.h>
#include <stdlib.h>

// 5.3) Escreva um programa para ler o ano de nascimento de uma 
// pessoa e escrever uma mensagem que diga se ela poderá ou 
// não votar este ano (não é necessário considerar o mês em 
// que ela nasceu).

int main(void) {
    int ano_nascimento = 0;

    printf("Digite o seu ano nascimento: \n");
    scanf("%d",&ano_nascimento);

    if(ano_nascimento <= 2006) {
        printf("Voce Podera Votar\n");
    } else {
        printf("Voce Nao Podera Votar\n");
    }
    return (0);
}