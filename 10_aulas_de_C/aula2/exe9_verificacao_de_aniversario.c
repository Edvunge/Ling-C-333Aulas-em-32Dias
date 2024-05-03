#include <stdio.h>
#include <stdlib.h>

/*
9. Faça um programa em C que permita entrar com o ano de nascimento da pessoa
e com o ano atual. O programa deve imprimir a idade da pessoa. Não se esqueça
de verificar se o ano de nascimento informado é válido.
*/

int main(void){
    int anoNascimento, anoActual, idade;

    printf("\nDigite o ano de nascimento: ");
    scanf("%d",&anoNascimento);

    printf("\nDigite o ano actual: ");
    scanf("%d",&anoActual);

    if (anoNascimento < anoActual){
        idade = anoActual - anoNascimento;
        printf("\nA sua idade e: %danos ",idade);
    } else {
        printf("\nano actual %d nao pode menor que o ano de nascimento %d",anoActual ,anoNascimento);
    }
    
    return (0);
}