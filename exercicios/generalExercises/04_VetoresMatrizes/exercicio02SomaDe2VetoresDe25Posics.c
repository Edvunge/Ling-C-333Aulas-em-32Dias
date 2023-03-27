#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
	Aula 112: Exercicio 02.   Faça um programa que some o conteúdo de dois 
	vetores de tamanho 25 e armazene o resultado
	em um terceiro vetor. Imprima os três vetores na tela.
*/

int main() {

    int i, vetor2[25], vetorSoma[25], vetor3[25];
	srand(time(NULL));
	
// vetor2 e vetor3  de 25 posiçoes, gerando valores aleatorios
    for(i = 0; i < 25; i++){
    	vetor3[i] = rand() % 100;
		vetor2[i] = rand() % 100; 
	}
	
 // calculo da soma dos dois vetores	
	printf("\n\n");
	
	for(i = 0; i < 25; i++){
    	vetorSoma[i] = vetor2[i] + vetor3[i]; // Calculando a soma de cada elemento do vetor.
    	printf("%2d ", vetorSoma[i]); // Apresentando, os valores calculados. 
	}       

	// Apresenta os valores gerados aleatoriamente para as 25 posiçoes no vetor3
    printf("\n\n");
    for(i = 0; i < 25; i++)
        printf("%d ", vetor3[i]);
    printf("\n\n");

	// Apresenta os valores gerados aleatoriamente para as 25 posiçoes no vetor2
    printf("\n\n");
    for(i = 0; i < 25; i++)
        printf("%d ", vetor2[i]);
    printf("\n\n");  
    return 0;
}
