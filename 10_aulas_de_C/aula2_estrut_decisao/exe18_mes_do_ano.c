#include <stdio.h>
#include <stdlib.h>

/*
18. Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês
correspondente. Caso o usuário digite um número fora desse intervalo, deverá
aparecer uma mensagem informando que não existe mês com este número.
Utilize o switch para este problema.
*/

int main(void){
    int mes;

    printf("\nDigite o um numero que corresponde ao mes:");
    scanf("%d",&mes);

    switch (mes) {
    case 1:
        printf("\nJaneiro.");
        break;
    case 2:
        printf("\nFevereiro.");
        break;
    case 3:
        printf("\nMarco.");
        break;
    case 4:
        printf("\nAbril.");
        break;
    case 5:
        printf("\nMaio.");
        break;
    case 6:
        printf("\nJunho.");
        break;
    case 7:
        printf("\nJulho.");
        break;
    case 8:
        printf("\nAgosto.");
        break;
    case 9:
        printf("\nSetembro.");
        break;
    case 10:
        printf("\nOutubro.");
        break;
    case 11:
        printf("\nNovembro.");
        break;
    case 12:
        printf("\nDezembro.");
        break;
    default:
        printf("\nNao existe mes com este numero.");
        break;
    }
    return (0);
}