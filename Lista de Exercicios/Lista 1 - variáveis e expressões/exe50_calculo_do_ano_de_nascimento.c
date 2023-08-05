#include <stdio.h>
#include <stdlib.h>
/*
50. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de
sua idade e do ano atual.
*/
int main(void){

    int idade, ano_nascimento, ano_actual = 2023;

    printf("\nDigite a sua idade:?");
    scanf("%d",&idade);

    ano_nascimento = ano_actual - idade;

    printf("\nO seu ano de nascimento e %d",ano_nascimento);
    return 0;
}