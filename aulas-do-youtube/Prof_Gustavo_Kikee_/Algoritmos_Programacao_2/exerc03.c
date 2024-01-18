#include <stdio.h>
#include <stdlib.h>
/*
exerc02
 Faça um programa que receba do usuario os elementos 
 de uma matriz 4x4 e 

Imprima na tela a posição do maior valor armazenado na matriz
	maior valor: 25 na linha 02, coluna 03

Imprima na tela a posição do menor valor armazenado na matriz
	Menor valor: 2 na linha 02, coluna 05

Imprima na tela a media da matriz
	media dos valores da matriz: 15
*/

int main(void) {
	int elemnts[4][4], posiMedia = 0, posiMax = 0, posiMin = 0;
	int maxElemnts = 0, minElemnts = 0, media = 0, soma = 0;

	for (int j = 0; j < 4; j++){
		for (int i = 0; i < 4; i++){
			printf("digite o elemento: [%d][%d]\n ",j,i);
			scanf("%d",&elemnts[j][i]);
		}
	}

	for (int j = 0; j < 4; j++){
		for (int i = 0; i < 4; i++){
			if(maxElemnts < elemnts[j][i]){
				maxElemnts = elemnts[j][i];
				posiMax = elemnts[j][i];
			}

			if(minElemnts > elemnts[j][i]){
				minElemnts = elemnts[j][i];
				posiMin = elemnts[j][i];
			}

			soma += elemnts[j][i];
			media = soma/16;
        }
	}

	printf("O Maior valor: %d na posicao: %d\n",maxElemnts,posiMax);
	printf("O Menor valor: %d na posicao: %d\n",minElemnts,posiMin);
	printf("O Valor da media eh: %d\n",media);
	return (0);
}