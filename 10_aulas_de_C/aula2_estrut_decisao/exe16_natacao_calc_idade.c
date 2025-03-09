#include <stdlib.h>
#include <stdio.h>

/*
16. A confederação brasileira de natação irá promover eliminatórias para o próximo
mundial. Faça um programa em C que receba a idade de um nadador e imprima
a sua categoria segundo a tabela a seguir:

Categoria ================================================ Idade
Infantil A ---------------------------------------------- 5 - 7 anos
Infantil B --------------------------------------------- 8 - 10 anos
Juvenil A --------------------------------------------- 11 - 13 anos
Juvenil B --------------------------------------------- 14 - 17 anos
Sênior --------------------------------------------- maiores de 18 anos

*/

int main(void){

    int idade_do_nadador;

    printf("\nDigite a idade do nadador: ");
    scanf("%d",&idade_do_nadador);

    if( idade_do_nadador >= 5   &&  idade_do_nadador  <= 7  ) {
        printf("\nPertence a Categoria: Infantil A.");
    } else if( idade_do_nadador >= 8   &&  idade_do_nadador  <= 10 ) {
        printf("\nPertence a Categoria: Infantil B.");
    } else if( idade_do_nadador >= 11  &&  idade_do_nadador  <= 13 ) {
        printf("\nPertence a Categoria: Juvenil A.");
    } else if( idade_do_nadador >= 14  &&  idade_do_nadador  <= 17 ) {
        printf("\nPertence a Categoria: Juvenil B.");
    } else if( idade_do_nadador >  18  ) {
        printf("\nPertence a Categoria: Senior.");
    }
    return (0);
}