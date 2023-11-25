#include "stdio.h"
#include "stdlib.h"

/*
    Aula 132: Como identificar o fim de uma string?
*/

int main(void) {
    int i;
    char palavras[55] = {"oi. Vamos aprender a programar em C?"};

    printf("Digite o seu nome: ");
    //scanf("%55[^\n]", palavras);
    // gets(palavras);
    //fgets(palavras, 15, stdin);

    i = 0;
    while(palavras[i] != '\0') {
        printf("%d = %c\n",i ,palavras[i]);
        i++;
    }

    printf("\n");
    return (0);
}