#include <stdio.h>
#include <stdlib.h>

/*
        14. Leia um angulo em graus e apresente-o convertido em radianos. A formula de conversao
                   e: R = G  =180, sendo G o angulo em graus e R em radianos e  = 3:14.
*/

int main() {

	float angulosEmGraus;
	
	printf("insira um valor para angulos Em Graus: ");
	scanf("%f",&angulosEmGraus);
	
	float PI = 3.14;
	
	float radianos = angulosEmGraus*PI/180;
	printf("o resultado em radianos sera de: %.3f",radianos);
	
	return 0;
}
