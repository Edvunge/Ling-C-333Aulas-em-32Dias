#include <stdio.h>
#include <stdlib.h>


/*
	44. Receba a altura do degrau de uma escada e a altura que o usuario deseja alcancar subindo a escada. 
	Calcule e mostre quantos degraus o usuario devera subir para atingir seu objetivo.
*/

int main() {

	int alturaEmDegraus;
	int alturaDesejadaPeloUser; 
	
	printf("a altura do degrau de uma escada?\n");
	scanf("%d",&alturaEmDegraus);
	
	printf("a altura que o usuario deseja alcancar subindo a escada\n");
	scanf("%d",&alturaDesejadaPeloUser);
	
	int calcDegraus = alturaDesejadaPeloUser - alturaEmDegraus;
	printf("degrau actual: %d\n",calcDegraus);
	
	return 0;
}
