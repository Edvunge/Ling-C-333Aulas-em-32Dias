#include <stdio.h>
#include <stdlib.h>

/*
              Aula 11
        Exercicio ler sexo, idade, peso e altura de um usuario.
        
*/

int main() {

	// cria��o e leitura do sexo
	char sexo;	
	printf("insira o seu sexo (F, f ou M, m ou O outros): ");
	sexo = getchar();
	
	// cria��o e leitura da idade
	int idade;
	printf("\ninsira a sua idade: \n");
	scanf("%d", &idade);
	
	
	// cria��o e leitura do peso
	float peso;
	printf("\ninsira o seu peso: \n");
	scanf("%f", &peso);
	
	// cria��o e leitura da altura
	float altura;
	printf("\ninsira a sua altura: \n");
	scanf("%f", &altura);

	// saida dos resultados:
	printf("\n\n\nsexo lido: %c\n", sexo);
	printf("\nA sua idade: %d\n", idade);
	printf("\nO seu peso: %.2f\n", peso);
	printf("\nA sua altura: %.2f\n", altura);
	return 0;
}
