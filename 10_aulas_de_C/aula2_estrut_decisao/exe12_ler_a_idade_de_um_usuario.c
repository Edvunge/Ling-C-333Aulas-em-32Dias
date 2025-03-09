#include <stdio.h>
#include <stdlib.h>

/*
12. Faça um programa que leia a idade de uma pessoa e informe:
• Se é maior de idade
• Se é menor de idade
• Se é maior de 65 anos
*/

int main(void){
    int idade;

    printf("\nDigite o valor da Idade: ");
    scanf("%d",&idade);

    if(idade >= 18 && idade <= 64) {
        printf("\nMaior de Idade.");
    } else if(idade < 18) {
        printf("\nMenor de Idade.");
    } else if(idade >= 65) {
        printf("\nIdade maior que 65anos.");
    } 
    return (0);
}