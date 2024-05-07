#include <stdio.h>
#include <stdlib.h>

/*
1. Implemente um programa em C que leia o nome, a idade e o endereço de uma
pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na tela
os dados da estrutura lida.
*/
struct dadosUser{
    char nome[10];
    int idade;
    char morada[20];
};


int main(void) {
    struct dadosUser ddpessoas;

    printf("Digite o nome: ");
    scanf("%s",&ddpessoas.nome);

    printf("O seu nome: %s", ddpessoas.nome);
    return (0);
}