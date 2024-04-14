#include <stdio.h>
#include <stdlib.h>

// Aula 175: como criar uma matriz de struct?

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
    Pessoa pessoas[3][5];

    pessoas[0][0] = lerPessoa();
    
    imprimirPessoa(pessoas[0][0]);

    return (0);
}