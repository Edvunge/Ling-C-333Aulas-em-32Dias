#include <stdio.h>
#include <stdlib.h>

// Aula 168: Como preencher uma struct com dados lidos pelo teclado.

typedef struct {
    int idade;
    char sexo;
    char nome[100];
} Pessoa;


int main() {
    Pessoa pessoa;

    printf("Digite seu nome: ");
    fgets(pessoa.nome, 100, stdin);

    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    scanf("%c");
    
    printf("Digite f ou m para o sexo: ");
    scanf("%c", &pessoa.sexo);

    printf("idade: %d ",pessoa.idade);
    printf("Nome: %s ",pessoa.nome);
    printf("sexo: %c ",pessoa.sexo);    
    return 0;
}