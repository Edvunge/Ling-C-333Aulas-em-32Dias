#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILIAIS       3
#define MAX_PRODUTOS      4 
#define MAX_MESES         12
#define MAX_NOME          50

// Estrutura para armazenar informações dos produtos
typedef struct {
    char nome[MAX_NOME];
    float preco;
} Produto;

// Nomes dos meses para exibição
char meses[MAX_MESES][MAX_NOME] = {
   "Janeiro", "Fevereiro", "Marco", "Abril", "Maio",
   "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
};

// Função para inicializar dados de exemplo
void inicializarDados(int vendas[MAX_FILIAIS][MAX_PRODUTOS][MAX_MESES], Produto produtos[MAX_PRODUTOS],
        char filiais[MAX_FILIAIS][MAX_NOME]) {

    // Inicializar nomes das filiais
    strcpy(filiais[0], "Centro");
    strcpy(filiais[1], "Shopping Norte");
    strcpy(filiais[2], "Bairro Sul");
    
    // Inicializar produto
    strcpy(produtos[0].nome, "Notebook");
    produtos[0].preco = 2500.00;
    strcpy(produtos[1].nome, "Mouse");
    produtos[1].preco = 45.00;
    strcpy(produtos[2].nome, "Teclado");
    produtos[2].preco = 120.00;
    strcpy(produtos[3].nome, "Monitor");
    produtos[3].preco = 800.00;

    // Dados de vendas simulados (quantidades vendidas)
    int dados_exemplo[MAX_FILIAIS][MAX_PRODUTOS][MAX_MESES] = {
        // Filial Centro
        {
            {15, 18, 22, 20, 25, 30, 28, 32, 29, 35, 40, 45}, // Notebook
            {120, 130, 140, 135, 150, 160, 155, 170, 165, 180, 190, 200}, // Mouse
            {80, 85, 90, 88, 95, 100, 98, 105, 102, 110, 115, 120}, // Teclado
            {25, 28, 32, 30, 35, 38, 36, 40, 38, 42, 45, 48}  // Monitor
        },
        // Filial Shopping Norte
        {
            {12, 15, 18, 16, 20, 24, 22, 26, 24, 28, 32, 35},
            {100, 110, 115, 112, 125, 130, 128, 135, 132, 140, 145, 150},
            {60, 65, 70, 68, 75, 80, 78, 85, 82, 90, 95, 100},
            {20, 22, 25, 24, 28, 30, 29, 32, 30, 35, 38, 40}
        },
        // Filial Bairro Sul
        {
            {8, 10, 12, 11, 14, 16, 15, 18, 17, 20, 22, 25},
            {80, 85, 90, 88, 95, 100, 98, 105, 102, 110, 115, 120},
            {45, 48, 52, 50, 55, 58, 56, 60, 58, 62, 65, 68},
            {15, 17, 19, 18, 21, 23, 22, 25, 24, 27, 29, 32}
        }
    };

    // Copiar dados para a matriz principal
    for(int f = 0; f < MAX_FILIAIS; f++) {
        for(int p = 0; p < MAX_PRODUTOS; p++) {
            for(int m = 0; m < MAX_MESES; m++) {
                vendas[f][p][m] = dados_exemplo[f][p][m];
            }
        }
    }
}

// Função para calcular vendas totais por filial
void calcularVendasPorFilial(int vendas[MAX_FILIAIS][MAX_PRODUTOS][MAX_MESES],
                            Produto produtos[MAX_PRODUTOS],
                            char filiais[MAX_FILIAIS][MAX_NOME]) {
                                printf("\n=== VENDAS TOTAIS POR FILIAL (EM EUROS) ===\n");

                                for(int f = 0; f < MAX_FILIAIS; f++) {
                                    float total_filial = 0.0;
                                    printf("\nFilial: %s\n", filiais[f]);
                                    printf("%-15s %10s %15s %15s\n", "Produto", "Qtd Total", "Preço Unit.", "Receita Total");
                                    printf("--------------------------------------------------------\n");

                                    for(int p = 0; p < MAX_PRODUTOS; p++) {
                                        int qtd_total = 0;
                                        // Somar vendas de todos os meses para este produto nesta filial
                                        qtd_total 
                                    }
                                }
                            }

