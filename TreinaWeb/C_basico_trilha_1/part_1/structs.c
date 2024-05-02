#include <stdio.h>

struct Animais{
    char nome[17];
    int idade;
    char setor[4];
};

int main(void) {
    struct Animais Felinos = {"Tigre", 3, "11g"};
    
    printf("O %s tem %i anos de idade e esta no setor %s\n",Felinos.nome, Felinos.idade, Felinos.setor);
    return (0);
}