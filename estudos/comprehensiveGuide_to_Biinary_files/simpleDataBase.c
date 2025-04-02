#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
    char email[50];
    char telefone[15];
} Contato;

void inserirContato(FILE *arquivo, Contato contato);
void listarContatos(FILE *arquivo);
Contato buscarContato(FILE *arquivo, int id);
int atualizarContato(FILE *arquivo, int id, Contato novosDados);
int excluirContato(FILE *arquivo, int id);

int main() {
    FILE *arquivo;
    Contato c1, c2, c3, busca, atualizado;
 
    // Inicializa contatos
    c1.id = 1;
    strcpy(c1.nome, "Pedro Alves");
    strcpy(c1.email, "pedro@exemplo.com");
    strcpy(c1.telefone, "(11)99999-8888");
 
    c2.id = 2;
    strcpy(c2.nome, "Maria Santos");
    strcpy(c2.email, "maria@exemplo.com");
    strcpy(c2.telefone, "(11)97777-6666");
 
    c3.id = 3;
    strcpy(c3.nome, "Luiz Costa");
    strcpy(c3.email, "luiz@exemplo.com");
    strcpy(c3.telefone, "(11)95555-4444");
 
    // Cria o arquivo
    arquivo = fopen("contatos.bin", "wb+");
    if (arquivo == NULL) {
        printf("Erro ao criar arquivo!\n");
    return 1;
 }
 
    // Insere contatos
    inserirContato(arquivo, c1);
    inserirContato(arquivo, c2);
    inserirContato(arquivo, c3);
 
    // Lista todos os contatos
    printf("=== LISTA DE CONTATOS ===\n");
    listarContatos(arquivo);
 
    // Busca um contato
    busca = buscarContato(arquivo, 2);
    if (busca.id != 0) {
        printf("\n=== CONTATO ENCONTRADO ===\n");
        printf("ID: %d\nNome: %s\nE-mail: %s\nTelefone: %s\n", busca.id, busca.nome, busca.email, busca.telefone);
    }
 
    // Atualiza um contato
    atualizado = busca;
    strcpy(atualizado.telefone, "(11)91111-2222");
    if (atualizarContato(arquivo, 2, atualizado) == 0) {
        printf("\nContato atualizado com sucesso!\n");
    }
 
    // Exclui um contato
    if (excluirContato(arquivo, 1) == 0) {
        printf("\nContato excluído com sucesso!\n");
    }
 
    // Lista novamente após as alterações
    printf("\n=== LISTA ATUALIZADA ===\n");
    listarContatos(arquivo);
 
    fclose(arquivo);
    return 0;
}

    void inserirContato(FILE *arquivo, Contato contato) {
        fseek(arquivo, 0, SEEK_END);
        fwrite(&contato, sizeof(Contato), 1, arquivo);
    }

    void listarContatos(FILE *arquivo) {
        Contato contato;
 
        // Volta ao início do arquivo
        rewind(arquivo);
 
    while (fread(&contato, sizeof(Contato), 1, arquivo) == 1) {
        if (contato.id != -1) { // Ignora registros excluídos
            printf("ID: %d | Nome: %s | E-mail: %s | Telefone: %s\n", contato.id, contato.nome, contato.email, contato.telefone);
        }
    }
}

    Contato buscarContato(FILE *arquivo, int id) {
        Contato contato;
        Contato vazio = {0};
 
        rewind(arquivo);
 
    while (fread(&contato, sizeof(Contato), 1, arquivo) == 1) {
        if (contato.id == id) {
            return contato;
        }
    }
 
    return vazio; // Retorna um contato vazio se não encontrar
}

    int atualizarContato(FILE *arquivo, int id, Contato novosDados) {
        Contato contato;
        int encontrado = 0;
        long posicao;
 
        rewind(arquivo);
 
    while (fread(&contato, sizeof(Contato), 1, arquivo) == 1) {
        if (contato.id == id) {
            posicao = ftell(arquivo) - sizeof(Contato);
            fseek(arquivo, posicao, SEEK_SET);
            fwrite(&novosDados, sizeof(Contato), 1, arquivo);
            encontrado = 1;
            break;
        }
    }
 
    return (encontrado ? 0 : 1);
}

    int excluirContato(FILE *arquivo, int id) {
        Contato contato;
        int encontrado = 0;
        long posicao;
 
        rewind(arquivo);
 
    while (fread(&contato, sizeof(Contato), 1, arquivo) == 1) {
        if (contato.id == id) {
            posicao = ftell(arquivo) - sizeof(Contato);
 
        // Marca o registro como excluído
        contato.id = -1;
 
            fseek(arquivo, posicao, SEEK_SET);
            fwrite(&contato, sizeof(Contato), 1, arquivo);
            encontrado = 1;
            break;
        }
    }
 
    return (encontrado ? 0 : 1);
}
