#include <stdio.h>
#include <stdlib.h>

/*
	4) Faca um programa que some os numeros impares entre 1 e 1000 e imprima a resposta.
Restricao:
Å® O bloco de repeticao deve executar no maximo 500 vezes.
*/

int main() {
	
	int num, soma = 0;  
	
	for(num = 1; num <= 1000; num+=2){
			soma += num;	
	}
	printf("\nO resultado da soma dos numeros impares de 1 a 1000 e de: %d ",soma);
	return 0;
}
