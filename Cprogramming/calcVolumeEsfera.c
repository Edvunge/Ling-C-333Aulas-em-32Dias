#include <stdio.h>
#include <stdlib.h>

/*
2. Escreva um programa que calcule o volume de uma esfera com raio de 10 metros, usando a fórmula v = 4/33. 
Escreva a fração 4/3 como 4.0f/3.0f (Tente escrevê-lo como 4/3. O que acontece?) 

Dica: C não tem um operador de exponenciação, então você precisará multiplicar r por si mesmo duas vezes para calcular
" 3
*/

int main(void) {
	//radius = 10 , v = 4/3PI ao cubo
	float radius = 10;
	float PI = 3.1415f, v;
	
	v = (4/(3*PI*radius*radius*radius));
	
	printf("v= %.2f",v);
	
	return 0;
}
