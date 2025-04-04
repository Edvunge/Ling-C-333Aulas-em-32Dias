#include <stdio.h>
#include <stdlib.h>

/*
        15. Leia um angulo em radianos e apresente-o convertido em graus. A formula de conversao
						e: G = R  180=, sendo G o ˆangulo em graus e R em radianos e  = 3:14.
*/

int main() {

	float radianos;
	
	printf("insira um valor em radianos: ");
	scanf("%f",&radianos);
	
	float PI = 3.14;
	
	float angulosEmGraus = radianos*180/PI;
	printf("o resultado em angulos sera de: %.3f", angulosEmGraus);
	
	return 0;
}
