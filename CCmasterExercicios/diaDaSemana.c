#include <stdlib.h>
#include <stdio.h>
/*
Fácil1 3 – Faça um Programa que leia um número e exiba o dia correspondente da semana. 
(1- Domingo , 2- Segunda, etc.) 
se digitar outro valor deve aparecer “valor inválido)
*/
int main (){
    int diaSemana;

    printf("Insira um dia que equivale ao dia da semana.");
    scanf("%d",&diaSemana);

    if(diaSemana == 1){
        printf("\n1 - Domingo.\n");
    } else if(diaSemana == 2){
        printf("\n2 - Segunda Feira.\n");
    } else if(diaSemana == 3){
        printf("\n3 - Terca Feira.\n");
    } else if(diaSemana == 4){
        printf("\n4 - Quarta Feira.\n");
    } else if(diaSemana == 5){
        printf("\n5 - Quinta Feira.\n");
    } else if(diaSemana == 6){
        printf("\n6 - Sexta Feira.\n");
    } else if(diaSemana == 7){
        printf("\n7 - Sabado.\n");
    } else {
        printf("\nValor Invalido\n");       
    }
    return 0;
}