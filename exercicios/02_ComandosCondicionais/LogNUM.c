#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
	12. Ler um numero inteiro. Se o numero lido for negativo, escreva a mensagem “Numero
	invalido”. Se o numero for positivo, calcular o logaritmo deste numero.
*/

int main() {
	
	int num;
	float loG;

	printf("Introduza um numero inteiro:\n");
	scanf("%d",&num);

	if (num > 0) {
		loG = log10(num);
		printf("O logaritmo %d e %.2f",num ,loG);
	} else{	
		printf("numero invalido.");
	}
	return 0;
}
