#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS  10
#define COLUNAS 10

int main(void) {
    int mat[LINHAS][COLUNAS];
    int num = 0, result = 0;
    int matAUX[10][10];

    // Inicializar a semente para números aleatórios
    srand(time(NULL));

    // Gerar números aleatórios para cada elemento da matriz
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            mat[i][j] = rand() % 100;  // Números aleatórios entre 0 e 99 (ajuste conforme necessário)
        }
    }

    // imprimir na tela os valores da matriz e inicializar a matriz auxiliar    
    for (int i = 0; i < LINHAS; i++) {  
        for (int j = 0; j < COLUNAS; j++) {     
            printf(" %d ", mat[i][j]);
            matAUX[i][j] = mat[i][j];
        }
        printf("\n");
    }

    // buscar o valor X
    printf("Digite um valor que queres buscar: ");
    scanf("%d", &num);

    printf("BUSCANDO O VALOR:....\n");

    // Verificar se o valor está presente na matriz auxiliar
    int encontrado = 0;  // Flag para indicar se o valor foi encontrado

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (matAUX[i][j] == num) {
                printf("Valor encontrado na posição (%d, %d)\n", i, j);
                encontrado = 1;
                break;  // Saia do loop interno se o valor for encontrado
            }
        }
        if (encontrado) {
            break;  // Saia do loop externo se o valor for encontrado
        }
    }

    if (!encontrado) {
        printf("Valor não encontrado\n");
    }

    return 0;
}
