#include <stdio.h>
#include <string.h>

typedef struct {
    int codigo;
    char descricao[100];
    float preco;
    int estoque;
} Produto;

int atualizarEstoque(const char *nomeArquivo, int codigo, int novoEstoque);

int main() {

    FILE *arquivo;
    Produto p1 = {1, "Teclado sem fio", 89.90, 15};
    Produto p2 = {2, "Mouse óptico", 45.50, 20};
    Produto lido;

    // Cria o arquivo com produtos
    arquivo = fopen("produtos.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao criar arquivo!\n");
        return 1;
    }

    fwrite(&p1, sizeof(Produto), 1, arquivo);
    fwrite(&p2, sizeof(Produto), 1, arquivo);
    fclose(arquivo);

    // atualiza o estoque do produto codigo 1
    if (atualizarEstoque("produtos.bin", 1, 10) == 0) {
        printf("Estoque atualizado com sucesso!\n");
    } else {
        printf("Erro na atualização ou produto não encontrado!\n");
    }

    // verifica se a atualizacao funcionou
    arquivo = fopen("produtos.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo para leitura!\n");
        return 1;
    }

    fread(&lido, sizeof(Produto), 1, arquivo);
    printf("Produto: %s | Novo estoque: %d\n", lido.descricao, lido.estoque);

    fclose(arquivo);
    return (0);
}

int atualizarEstoque(const char *nomeArquivo, int codigo, int novoEstoque) {
    FILE *arquivo;
    Produto produto;
    int encontrado = 0;

    arquivo = fopen(nomeArquivo, "r+b");
    if (arquivo == NULL) return 1;

    while (fread(&produto, sizeof(Produto), 1, arquivo) == 1) {
        if (produto.codigo == codigo) {

            fseek(arquivo, -sizeof(Produto), SEEK_CUR);

            produto.estoque = novoEstoque;

            fwrite(&produto, sizeof(Produto), 1, arquivo);
            encontrado = 1;
            break;
        }
    }

    fclose(arquivo);
    return (encontrado ? 0 : 1);
}
