#include <stdio.h>
#include <stdlib.h>

//      Aula 147: Criando um procedimento que retorna o tamanho de uma string em C
int minhaStrLem(char str[]) {
    int tam = 0;

    while(str[tam] != '\0') {
        tam++;
    }
    return tam;
}

void imprimirString(char palavra[]) {
    int i = 0;

    while (palavra[i] != '\0') {
        printf("%c", palavra[i]);
        i++;
    }
    printf("\n");
}

int main() {
    char vet[20] = {"ola. Bom Dia!"};

    printf("strlen: %d\n", strlen(vet));
    printf("minhaStrLen: %d\n",minhaStrLem(vet));
    imprimirString(vet);
    return (0);
}