#include <stdio.h>
#include <stdlib.h>

// defina uma funcao chamada hipotenusa que calcule o tamanho da hipotenusa de um triangulo retangulo,
// quando os dois lados sao conhecidos, Use essa funcao em um programa para determinar o tamanho da hipotenusa,
// de cada um dos triangulos da tabela a seguir, A funcao devera usar dois argumentos do tipo double e retornar,
// a hipotenusa como um double. teste seu programa com os valores de lado especificos;
// tal como: 1 lado: 3.0 lado: 4.0

double hipotenusa(double ladoX, double ladoY) {
	double hipotenusa = ladoX + ladoY;
	return ( hipotenusa );
}

int main( void ) {
	printf( "O valor da hipotenusa eh: %.2f", hipotenusa(3.0, 4.0) );
	return (0);
}

