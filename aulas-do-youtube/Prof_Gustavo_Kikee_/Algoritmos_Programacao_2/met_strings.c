#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    
    // declaracoes
    char nome[50];
    int i;

    // usuario informa o nome
    printf("Digite um nome:\n");
    scanf("%s",nome);

    // teste do nome
    if(strcmp(nome, "Edvaldo")==0){
        printf("Bom dia Edvaldo\n");
    } else {
        printf("Bom dia desconhecido\n");
    }

    // imprime
    printf("Nome: %s\n",nome);
    return (0);
}