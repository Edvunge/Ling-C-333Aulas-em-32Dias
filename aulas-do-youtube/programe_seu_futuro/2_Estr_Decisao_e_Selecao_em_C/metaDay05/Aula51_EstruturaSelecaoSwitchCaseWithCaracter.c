#include <stdio.h>
#include <stdlib.h>

/*
            Aula 51: Estrutura de Seleção - Switch Case caracter
                   a - Cadastrar produto
                   b - Vender produto
                   c - Buscar produto
                   d - Imprimir produto
                   z - Sair      
*/


int main(void) {
    char opcao;

    printf("a - Cadastrar produto\nb - Vender produto\nc - Buscar produto\nd - Imprimir produto\nz - sair\n");
    scanf("%c", &opcao);

    switch (opcao) {
    case 'a':
        printf("\nCadastrando novo produto.\n");
        break;
    case 'b':
        printf("\nVendendo um novo produto.\n");
        break;
    case 'c':
        printf("\nBuscando novo produto.\n");
        break;
    case 'd':
        printf("\nImprimindo relatorio.\n");
        break;
    case 'z':
        printf("\nSaindo...\n");
        break;                   
    default:
        printf("\nOpcao Invalida!\n");
    }

    return (0);
}