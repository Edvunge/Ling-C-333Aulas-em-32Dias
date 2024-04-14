#include <stdio.h>
#include <stdlib.h>

// Aula 174: como criar um vetor de struct?

typedef struct {
    int dia, mes, ano;
}DataNas;

typedef struct {
    DataNas DataNas;
    int idade;
    char sexo;
    char nome[100];
} Pessoa;


void imprimirPessoa(Pessoa p) {
    printf("\tNome: %s", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData de nas.: %d/%d/%d\n", p.DataNas.dia , p.DataNas.mes , p.DataNas.ano);
}

Pessoa lerPessoa() {
    Pessoa p;
    printf("Digite seu nome: ");
    fgets(p.nome, 100, stdin);

    printf("Digite sua idade: ");
    scanf("%d", &p.idade);
    scanf("%c");

    printf("Digite f ou m para o sexo: ");
    scanf("%c", &p.sexo);

    printf("Digite sua data de nascimento no formato dd mm aaaa: ");
    scanf("%d%d%d", &p.DataNas.dia , p.DataNas.mes , p.DataNas.ano);
    return p;
}

int main(void) {
    int i;
    Pessoa pessoas[3];

    for (i = 0; i < 3; i++)
        pessoas[0] = lerPessoa();
    
    for (i = 0; i < 3; i++)
        imprimirPessoa(pessoas[0]);

    return (0);
}