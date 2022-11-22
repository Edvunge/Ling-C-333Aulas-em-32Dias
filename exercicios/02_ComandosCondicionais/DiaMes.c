#include <stdio.h>
#include <stdlib.h>

/*
	16. Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mes
	correspondente a este numero. Isto e, janeiro se 1, fevereiro se 2, e assim por diante.
*/

int main() {
	
	int diaMes;
	
	printf("\nInsira um um inteiro entre 1 e 12 para o mes:?\n");
	scanf("%d",&diaMes);
	
	switch(diaMes){
		case 1:
			printf("\nJaneiro.");
		break;
		case 2:
			printf("\nFevereiro.");
		break;
		case 3:
			printf("\nMarco.");
		break;
		case 4:
			printf("\nAbril.");
		break;
		case 5:
			printf("\nMaio.");
		break;
		case 6:
			printf("\nJunho.");
		break;
		case 7:
			printf("\nJulho.");
		break;
		case 8:
			printf("\nAgosto.");
		break;
		case 9:
			printf("\nSetembro.");
		break;
		case 10:
			printf("\nOctubro.");
		break;
		case 11:
			printf("\nNovembro.");
		break;
		case 12:
			printf("\nDezembro.");
		break;
		default:
			printf("\nNumero Invalido.");
	}
	return 0;
}
