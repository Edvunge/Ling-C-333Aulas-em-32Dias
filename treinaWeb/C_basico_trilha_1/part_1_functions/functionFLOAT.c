#include <stdio.h>

float circulo(float pi, float raio);

void main() {
	float Pi = 3.1415;
	float Raio = 2.0;

	printf("O comprimento do circulo eh: %.2f\n",circulo(Pi,Raio));
}

float circulo(float pi, float raio) {
	return 2*(pi*raio);
}
