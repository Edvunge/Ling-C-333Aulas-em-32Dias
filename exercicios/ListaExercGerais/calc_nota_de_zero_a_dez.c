#include <stdio.h>
#include <stdlib.h>

/*
	Fa�a um programa que pe�a uma nota, entre zero e dez. Mostre uma
	mensagem caso o valor seja inv�lido e continue pedindo at� que o
	usu�rio informe um valor v�lido.
*/
int main() {
	
	float nota;
	
	// 0 - 10
	do {
		printf("Insira uma nota:?");
		scanf("%f",&nota);
	} while ( (nota > 0) && (nota < 10) );
	return 0;
} 
