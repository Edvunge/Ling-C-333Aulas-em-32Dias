#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
    float salario;
} Funcionario;

int main() {

    FILE *arquivo;
    Funcionario func1, func2;

    // Inicialização da estrutura
    func1.id = 1001;
    strcpy(func1.nome, "João Silva");
    func1.salario = 3500.50;

    // Escrita da estrutura no arquivo
    arquivo = fopen("funcionarios.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    fwrite(&func1, sizeof(Funcionario), 1, arquivo);
    fclose(arquivo);

    // leitura da estrutura do arquivo
    arquivo = fopen("funcionarios.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura!\n");
        return 1;
    }

    fread(&func2, sizeof(Funcionario), 1, arquivo);
    fclose(arquivo);

    // Exibição dos dados
    printf("ID: %d\n", func2.id);
    printf("Nome: %s\n", func2.nome);
    printf("Salario: %.2f\n", func2.salario);

    return (0);
}


