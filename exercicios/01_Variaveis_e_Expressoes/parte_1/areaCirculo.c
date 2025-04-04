#include <stdio.h>
#include <stdlib.h>

/*
	Leia o valor do raio de um circulo e calcule e imprima a area do circulo correspondente.
	A area do circulo e   raio2, considere  = 3:141592.
*/

int main() {

	float raio;
	
	printf("indique o valor do raio:?");
	scanf("%f",&raio);
	
	float PI = 3.141592;
	float areaCirculo =( PI * ( (raio) * (raio) ));
	
	printf("o resultado do calculo de area: %.2f\n",areaCirculo);
	
	return 0;
}
