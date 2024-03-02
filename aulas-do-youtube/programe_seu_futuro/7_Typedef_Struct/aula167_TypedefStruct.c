#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Aula 167: Como criar novos tipos de dados em C com typedef struct

// primeiro formato de struct
typedef struct {
    int idade;
    char sexo;
    char nome[100];
} Pessoa;


// segundo formato de struct
struct Pessoa2{
    int idade;
    char sexo;
    char nome[100];
};


int main() {
    Pessoa pessoa1;
    struct Pessoa2 pessoa2;

    pessoa1.idade = 20;
    pessoa1.sexo = 'f';
    strcpy(pessoa1.nome, "Edvaldo");

    printf("idade: %d ",pessoa1.idade);
    printf("Nome: %s ",pessoa1.nome);
    printf("sexo: %c ",pessoa1.sexo);    
    return 0;
}