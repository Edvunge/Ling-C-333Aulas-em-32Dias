#include <stdio.h>
#include <stdlib.h>

/*
	15. Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia
	da semana correspondente a este numero. Isto e, domingo se 1, segunda-feira se 2, e
	assim por diante.
*/

int main() {
	
	int diaSemana;
	
	printf("\nInsira um dia da semana:?\n");
	scanf("%d",&diaSemana);
	
	switch(diaSemana){
		case 1:
			printf("\nDomingo.");
		break;
		case 2:
			printf("\nSegunda feira.");
		break;
		case 3:
			printf("\nTerca feira.");
		break;
		case 4:
			printf("\nQuarta feira.");
		break;
		case 5:
			printf("\nQuinta feira.");
		break;
		case 6:
			printf("\nSexta feira.");
		break;
		case 7:
			printf("\nSabado.");
		break;
		default:
			printf("\nNumero Invalido.");
	}
	return 0;
}
