#include <stdio.h>
#include <stdlib.h>

// Aula 176: como criar um tipo electronico typedef de struct?

typedef struct {
    char tipo[100];
    char marca[50];
    char modelo[25];
    char energia;
    char descricao[500];
    int quantidade;
    int codigo;
}Eletronico;


void imprimirEletronico(Eletronico e) {
    printf("\tTipo: %s", e.tipo);
    printf("\tMarca: %s\n", e.marca);
    printf("\tModelo: %s\n", e.modelo);
    printf("\tEnergia: %c\tQuantidade: %d\n", e.energia, e.quantidade);
    printf("\tDescricao: %s\n", e.descricao);
}

Eletronico lerEletronico() {
    Pessoa p;
    printf("Digite o tipo: ");
    fgets(e.tipo, 100, stdin);

    printf("Digite a sua marca: ");
    fgets(e.marca, 50, stdin);
    

    printf("Modelo: ");
    fgets(e.modelo, 25, stdin);

    printf("Efeciencia energetica: ");
    scanf("%c", &e.energia);
    scanf("%c");

    printf("Descricao: ");
    fgets(e.descricao, 500, stdin);
    
    printf("quantidade e codigo: ");
    scanf("%d%d", &e.quantidade, &e.codigo);
    return e;
}

int main(void) {
    int i;
    Pessoa pessoas[3][5];

    pessoas[0][0] = lerPessoa();
    
    imprimirPessoa(pessoas[0][0]);

    return (0);
}