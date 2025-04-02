#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
    float nota;
} Aluno;

void inserirAluno(FILE *arquivo, Aluno aluno);
Aluno lerAluno(FILE *arquivo, int indice);

int main() {
    FILE *arquivo;
    Aluno a1, a2, a3, lido;

    // Inicialização das estruturas
    a1.id = 1;
    strcpy(a1.nome, "Ana");
    a1.nota = 8.5;

    a2.id = 2;
    strcpy(a2.nome, "Carlos");
    a2.nota = 7.8;

    a3.id = 3;
    strcpy(a3.nome, "Maria");
    a3.nota = 9.2;

    // Abre o arquivo para escrita e leitura binaria
    arquivo = fopen("alunos.bin", "wb+");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    // Insere os alunos
    inserirAluno(arquivo, a1);
    inserirAluno(arquivo, a2);
    inserirAluno(arquivo, a3);

    // le o segundo aluno (indice 1)
    lido = lerAluno(arquivo, 1);

    // Exibe os dados
    printf("ID:    %d\n", lido.id);
    printf("Nome:  %s\n", lido.nome);
    printf("Nota:  %.2f\n", lido.nota);

    fclose(arquivo);
    return (0);
}

void inserirAluno(FILE *arquivo, Aluno aluno) {
    fwrite(&aluno, sizeof(Aluno), 1, arquivo);
}

Aluno lerAluno(FILE *arquivo, int indice) {
    Aluno aluno;

    // Posiciona o cursor no registro desejado
    fseek(arquivo, indice * sizeof(Aluno), SEEK_SET);

    // Le o registro
    fread(&aluno, sizeof(Aluno), 1, arquivo);

    return aluno;
}

