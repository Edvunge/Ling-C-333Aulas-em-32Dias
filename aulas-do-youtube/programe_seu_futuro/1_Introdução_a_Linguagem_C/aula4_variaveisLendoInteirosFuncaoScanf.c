#include <stdio.h>
#include <stdlib.h>

/* 
	Aula 4:
	variaveis 
	Lendo numeros inteiros.
*/
int main(void) {
	int valor;// criei uma variavel para guardar um valor do tipo inteiro
	
	// atribuição -> atribuir um valor a uma variavel
	valor = 50;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &valor); // função Scanf -> é uma função de entrada de valores
	
	printf("valor da minha variavel: %d",valor);
	return 0;
}
