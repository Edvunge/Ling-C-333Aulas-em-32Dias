#include <stdio.h>
#include <stdlib.h>

// Problema 1: Copiar um arquivo e 
// mostrar seu conteúdo na tela

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <nome_origem> <nome_destino>\n", argv[0]);
        return 1;
    }

    FILE *origem = fopen(argv[1], "r");
    if (origem == NULL) {
        perror("Erro ao abrir o arquivo de origem");
        return 1;
    }

    FILE *destino = fopen(argv[2], "w");
    if (destino == NULL) {
        perror("Erro ao criar o arquivo de destino");
        fclose(origem);
        return 1;
    }

    char caractere;
    while ((caractere = fgetc(origem)) != EOF) {
        fputc(caractere, destino);
        putchar(caractere); // Mostra na tela o conteúdo copiado
    }

    fclose(origem);
    fclose(destino);

    return 0;
}
