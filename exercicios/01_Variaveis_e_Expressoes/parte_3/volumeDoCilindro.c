#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
	Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
		de um cilindro circular ´e calculado por meio da seguinte formula: V =   raio2  altura,
		onde  = 3:141592.
*/

int main() {

	float altura;
	float raio;
	const float PI = 3.141592;
	
	printf("indique o valor da altura:?");
	scanf("%f",&altura);
	
	printf("indique o valor raio:?");
	scanf("%f",&raio);
	
	float volume = ( PI * (raio*raio) * altura);
	
	printf("o resultado do volume do cilindro é: %.2f\n",volume);
	return 0;
}
