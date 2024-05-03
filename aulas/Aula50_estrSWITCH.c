#include <stdio.h>
#include <stdlib.h>
/*
			Aula 50: Estrutura de seleção switch case
			opções: 
					1 - cadastrar produto
					2 - vender produto
					3 - buscar produto
					4 - imprimir realtorio
					0 - sair		
*/

int main() {

	int opcao;
	
	printf("\n\t**************** / Menu do Sistema / \n\n");
	printf("\n\t\t1 - cadastrar produto.\n");
	printf("\n\t\t2 - vender produto.\n");
	printf("\n\t\t3 - buscar produto.\n");
	printf("\n\t\t4 - imprimir relatorio.\n");
	printf("\n\t\t5 - sair.\n");
	printf("\n\t************************************\n\n");
	printf("\n\tescolhe uma opçao do menu.\n\t");
	scanf("%d",&opcao);
	
	switch(opcao){
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
			printf("\nOpcao invalida!\n");
			
	}
	return 0;
}
