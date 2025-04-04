#include <stdio.h>
#include <stdlib.h>

/*
1. Faça um programa em C que imprima o seu nome.
*/ 

int main(void){
    char nome[25];

    printf("\nDigite o seu nome:");
    fgets(nome, 25 ,stdin);
    
    printf("\nOla %s bem-vindo.",nome);
    return (0);
}