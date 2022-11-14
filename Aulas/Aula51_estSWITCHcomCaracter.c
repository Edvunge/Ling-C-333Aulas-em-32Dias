#include <stdio.h>
#include <stdlib.h>
/*
			Aula 50: Estrutura de seleção switch case com caracter
			opções: 
					a - cadastrar produto
					b - vender produto
					c - buscar produto
					d - imprimir realtorio
					z - sair		
*/

int main() {

	char opcao;
	
	printf("\n\t**************** / Menu do Sistema / \n\n");
	printf("\n\t\ta - cadastrar produto.\n");
	printf("\n\t\b - vender produto.\n");
	printf("\n\t\tc - buscar produto.\n");
	printf("\n\t\td - imprimir relatorio.\n");
	printf("\n\t\tz - sair.\n");
	printf("\n\t************************************\n\n");
	printf("\n\tescolhe uma opçao do menu.\n\t");
	scanf("%c",&opcao);
	
	switch(opcao){
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
			printf("\nOpcao invalida!\n");		
	}
	return 0;
}
