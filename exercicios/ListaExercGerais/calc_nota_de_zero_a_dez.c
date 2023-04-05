#include <stdio.h>
#include <stdlib.h>

/*
	Faça um programa que peça uma nota, entre zero e dez. Mostre uma
	mensagem caso o valor seja inválido e continue pedindo até que o
	usuário informe um valor válido.
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
