#include <stdio.h>
#include <stdlib.h>


int main(void) {
    char nome[12];

    printf("qual e o teu nome: \n");
    fgets(nome, 12, stdin);

    return (0);
}