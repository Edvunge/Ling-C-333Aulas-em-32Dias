#include <stdio.h>
#include <stdlib.h>

/*
	Fazer um programa em C que pergunta um valor em metros e imprime o
	correspondente em decímetros, centímetros e milímetros.
	
	sabemos que 1 dam equivale 10 m, 
	logo 10 dam equivale a: 

	1 dam = 10 m
	10 dam = 100 m


	10 X N = CV
	onde 
	N = numero de metros por determinar
	CV = valor convertido 
*/
int main() {
	int valorMetro;
	
	printf("Indique um valor em metros?");
	scanf("%d",&valorMetro);	
	
	int conversorDcm = (10*valorMetro);
	int decimetro = conversorDcm;
	
	int conversorCm = (100*valorMetro);
	int centimetro = conversorCm;
	
	int conversorMil = (1000*valorMetro);
	int milimetro = conversorMil;
	
	printf("O valor em decimetro: %.1d\n",decimetro);
	printf("O valor em centimetro: %.1d\n",centimetro);
	printf("O valor em milimetro: %d.1\n",milimetro);
	return 0;
} 
