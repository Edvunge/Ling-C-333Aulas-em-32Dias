#include <stdio.h>
#include <stdlib.h>

/*
	11. Escreva um programa que leia um numero inteiro maior do que zero e devolva, na tela, a
	soma de todos os seus algarismos. Por exemplo, ao numero 251 correspondera o valor
	8 (2 + 5 + 1). 
	Se o numero lido nao for maior do que zero, o programa terminar a com a mensagem “Numero invalido”.
*/

int main() {
	
	int numero,resto,somatorio;

	printf("Introduza um numero inteiro para obter o somatorio dos seus digitos \n");
	scanf("%d",&numero);
	
	somatorio=0;

	while (numero>0) {
		resto=numero % 10;
		numero=(numero-resto)/10;
		somatorio = somatorio + resto;
	}

	printf("O somatorio e %d \n",somatorio);
	return 0;
}
