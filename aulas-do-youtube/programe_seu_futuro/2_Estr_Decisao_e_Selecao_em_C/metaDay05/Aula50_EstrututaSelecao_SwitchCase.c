#include <stdio.h>
#include <stdlib.h>

/*
            Aula 50: Estrutura de Seleção - Switch Case 
                    - Cadastrar produto
                    - Vender produto
                    - Buscar produto
                    - Imprimir produto
                    - Sair      
*/


int main(void) {
    int opcao;

    printf("1 - Cadastrar produto\n2 - Vender produto\n3 - Buscar produto\n4 - Imprimir produto\n5 - sair\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("\nCadastrando novo produto.\n");
        break;
    case 2:
        printf("\nVendendo um novo produto.\n");
        break;
    case 3:
        printf("\nBuscando novo produto.\n");
        break;
    case 4:
        printf("\nImprimindo relatorio.\n");
        break;
    case 5:
        printf("\nSaindo...\n");
        break;                   
    default:
        printf("\nOpcao Invalida!\n");
    }

    return (0);
}