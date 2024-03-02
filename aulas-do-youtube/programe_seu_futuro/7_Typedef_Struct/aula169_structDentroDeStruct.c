#include <stdio.h>
#include <stdlib.h>

// Aula 169: Como ter struct de struct.

typedef struct{
    int dia, mes, ano;
}DataNas;


typedef struct {
    DataNas dataNas;
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

    printf("Digite sua data de nascimento no formato dd mm aaaa: ");
    scanf("%d%d%d",&pessoa.dataNas.dia, &pessoa.dataNas.mes, &pessoa.dataNas.ano);

    printf("idade: %d ",pessoa.idade);
    printf("Nome: %s ",pessoa.nome);
    printf("sexo: %c ",pessoa.sexo);    
    return 0;
}