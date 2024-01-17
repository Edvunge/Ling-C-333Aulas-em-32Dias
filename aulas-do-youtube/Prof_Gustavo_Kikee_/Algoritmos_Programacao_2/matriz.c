#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int matriz[3][3];

    int linha, coluna;

    // armazena os valores
    for(linha = 0; linha < 3; linha++){
        for(coluna=0; coluna<3; coluna++){
            printf("linha %d, coluna %d:\n",linha, coluna);
            scanf("%d",&matriz[linha][coluna]);
        }
    }

    // exibe a matriz
    for(linha = 0; linha < 3; linha++){
        for(coluna=0; coluna<3; coluna++){
            printf("%3d ",matriz[linha][coluna]);
        }
        printf("\n");
    }
    return (0);
}