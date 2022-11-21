#include <stdio.h>
#include <stdlib.h>
/*
	8) Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para
	isso a estrutura de seleção switch.
	Obs.: Considere fevereiro como tendo 28 dias.
*/

int main() {

	int diasMes;
	
	printf("Insira um numero de 1 a 12\n");
	scanf("%d",&diasMes);
	
	switch(diasMes){
		case 1:
			printf("\n\tJaneiro 31 Dias.\n");
			break;
		case 2:
			printf("\n\tFevereiro 28 Dias.\n");
			break;
		case 3:
			printf("\n\tMarco 31 Dias.\n");
			break;
		case 4:
			printf("\n\tAbril 30 Dias.\n");
			break;
		case 5:
			printf("\n\tMaio 31 Dias.\n");
			break;
		case 6:
			printf("\n\tJunho 30 Dias.\n");
			break;
		case 7:
			printf("\n\tJulho 31 Dias.\n");
			break;
		case 8:
			printf("\n\tAgosto 31 Dias.\n");
			break;
		case 9:
			printf("\n\tSetembro 30 Dias.\n");
			break;
		case 10:
			printf("\n\tOutubro 31 Dias.\n");
			break;
		case 11:
			printf("\n\tNovembro 30 Dias.\n");
			break;
		case 12:
			printf("\n\tDezembro 31 Dias.\n");
			break;
		default:
			printf("\n\tMes Invalido.\n");
	}
	return 0;
}
