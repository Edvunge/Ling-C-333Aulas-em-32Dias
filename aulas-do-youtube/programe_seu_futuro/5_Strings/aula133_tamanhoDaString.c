#include "stdio.h"
#include "stdlib.h"

/*
    Aula 133: Como descubrir o tamanho de uma string?
*/

int main(void) {
    int i, tam = 0;
    char palavras[55] = {"oi. Vamos aprender a programar em C?"};

    printf("Digite o seu nome: ");
    //scanf("%55[^\n]", palavras);
    // gets(palavras);
    fgets(palavras, 15, stdin);

    i = 0;
    while(palavras[i] != '\0') {
        if(palavras[i] == '\n');
            palavras[i] = '\0';
        i++;
    }

    i = 0;
    while(palavras[i] != '\0') {
        // printf("%d = %d\n",i ,palavras[i]);
        tam++;
        i++;
    }

    printf("Tamanho: %d\n", tam);
    return (0);
}