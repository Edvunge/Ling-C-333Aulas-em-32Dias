#include <stdio.h>

int main() {
    
    FILE *arquivo;
    int numeros[5] = {10, 20, 30, 40, 50};
    int lidos[5];

    // escrita no arquivo binário
    arquivo = fopen("numeros.bin", "wb");
    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita!\n");
        return 1;
    }
    
    fwrite(numeros, sizeof(int), 5, arquivo);
    fclose(arquivo);

    // leitura do arquivo binario
    arquivo = fopen("numeros.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura!\n");
        return 1;
    }

    fread(lidos, sizeof(int), 5, arquivo);
    fclose(arquivo);

    // Exibição dos valores lidos
    for (int i = 0; i < 5; i++) {
        printf("Número %d: %d\n", i+1, lidos[i]);
    }

    return (0);
}


