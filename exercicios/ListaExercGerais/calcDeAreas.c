#include <stdio.h>
#include <stdlib.h>

/*
	Exerc�cio 1
	Escrever um algoritmo que l� 3 valores - a, b e c - e calcula:
*/
int main() {
	
	float a = 0, b = 0, c = 0, baseMaior, baseMenor, altura, areaDoTrapezio, lado, aresta, areaDoQuadrado, areaDoCubo;
	
	printf("Digite o primeiro valor:\n");
	scanf("%f", &baseMaior);
	
	printf("\nDigite o segundo valor:\n");
	scanf("%f", &baseMenor);
	
	printf("\nDigite o terceiro valor:\n");
	scanf("%f", &altura);	
	// a) A �rea do trap�zio que tem a como A base maior, 
	// B como base menor e C como altura
	
	// �readotrap�zio = ((basemaior + basemenor) / 2) * altura
	areaDoTrapezio = ((baseMaior + baseMenor) / 2) * altura;
	printf("A area do trapezio e igual: %.1f\n",areaDoTrapezio);
	
	// b) A �rea do quadrado que tem o valor 
	// da vari�vel b como lado
	
	// �reado quadrado = lado elevado ao quadrado
	b = lado;
	areaDoQuadrado = (lado * 2);
	printf("A area do quadrado e igual: %.1f\n",areaDoQuadrado);
	
	
	// c) A �rea da superf�cie de um cubo que tem c por aresta
	// �readocubo = 6 * aresta elevado ao quadrado
	c = aresta;
	areaDoCubo = (6 * (aresta * 2));
	printf("A area do cubo e igual: %.1f\n",areaDoCubo);
	
	return 0;
} 
