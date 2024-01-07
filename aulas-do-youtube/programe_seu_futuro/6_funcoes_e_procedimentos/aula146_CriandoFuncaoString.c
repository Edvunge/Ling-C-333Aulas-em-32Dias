#include <stdio.h>
#include <stdlib.h>

//      Aula 146: Criando uma função que retorna o tamanho de uma string em C
int minhaStrLem(char str[]) {
    int tam = 0;

    while(str[tam] != '\0') {
        tam++;
    }
    return tam;
}

int main() {
    char vet[20] = {"ola. Bom Dia!"};

    printf("strlen: %d\n", strlen(vet));
    printf("minhaStrLen: %d\n",minhaStrLem(vet));
    
    return (0);
}