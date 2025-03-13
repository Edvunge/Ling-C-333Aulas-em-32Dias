#include <stdio.h>
#include <string.h>

/* 1. Implemente um programa em C que leia o nome, a idade e o endereço de uma
pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na tela
os dados da estrutura lida. */

struct Pessoa {
    char nome[20];
    int idade;
    char endereco[30];
};


int main(void) {
    
    struct Pessoa pessoa;

    //pessoa.nome = "edvaldo";
    strcpy(pessoa.nome, "Edvaldo");
    pessoa.idade = 29;
    //pessoa.endereco = "rua almada";
    strcpy(pessoa.endereco, "Rua almada");

    printf("\nNome: %s\n Idade: %d\n Endereco: %s\n", pessoa.nome, pessoa.idade, pessoa.endereco);

    return (0);
}
