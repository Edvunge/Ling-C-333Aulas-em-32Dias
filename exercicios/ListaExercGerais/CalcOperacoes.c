#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
   5. Fazer um programa em "C" que solicite 2 n�meros e informe:
a) A soma dos n�meros;
b) O produto do primeiro n�mero pelo quadrado do segundo;
c) O quadrado do primeiro n�mero;
d) A raiz quadrada da soma dos quadrados;
e) O seno da diferen�a do primeiro n�mero pelo segundo;
f) O m�dulo do primeiro n�mero. 
*/

int main() {
	
	double num1, num2;
	
	printf("insira dois reais: \n");
	scanf("%f%f",&num1, &num2);
	
		double soma = (num1 + num2);
		printf("o resultado da soma: %.2f\n", soma );
	
		double produto = ( num1 * (num2 * num2) );
		printf("o resultado do produto: %.2f\n", produto);
	
		double quadradoPrimeiro = (num1 * num1);
		printf("o resultado quadrado primeiro: %.2f\n", quadradoPrimeiro);
	
		double raiz = ( sqrt(num1 + num2) );
		printf("o resultado raiz: %.2f\n", raiz);	
		
		double seno = ( sin(num1 - num2) );
		printf("o resultado do seno: %.2f\n", seno);
		
		double modulo = ( abs(num1) );
	 	printf("o resultado do modulo: %.2f\n", modulo);
	 	
	return 0;
}
