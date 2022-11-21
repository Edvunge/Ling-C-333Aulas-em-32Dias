#include <stdio.h>
#include <stdlib.h>
/*
	6) Faça um programa para ler um número inteiro e verificar se corresponde a um mês válido no
calendário. Caso corresponda, escrever o nome do mês, caso contrário, escrever a mensagem ‘Mês Inválido’.
			
*/

int main() {

	int mesAno;
	
	printf("Insira um numero de 1 a 12\n");
	scanf("%d",&mesAno);
	
	switch(mesAno){
		case 1:
			printf("\n\tJaneiro.\n");
			break;
		case 2:
			printf("\n\tFevereiro.\n");
			break;
		case 3:
			printf("\n\tMarco.\n");
			break;
		case 4:
			printf("\n\tAbril.\n");
			break;
		case 5:
			printf("\n\tMaio.\n");
			break;
		case 6:
			printf("\n\tJunho.\n");
			break;
		case 7:
			printf("\n\tJulho.\n");
			break;
		case 8:
			printf("\n\tAgosto.\n");
			break;
		case 9:
			printf("\n\tSetembro.\n");
			break;
		case 10:
			printf("\n\tOutubro.\n");
			break;
		case 11:
			printf("\n\tNovembro.\n");
			break;
		case 12:
			printf("\n\tDezembro.\n");
			break;
		default:
			printf("\n\tMes Invalido.\n");
	}
	return 0;
}
