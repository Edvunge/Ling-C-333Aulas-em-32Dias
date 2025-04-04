#include <stdio.h>
#include <stdlib.h>


/*
	38. Leia o salario de um funcionario. Calcule e imprima o valor do novo salario, sabendo que
		ele recebeu um aumento de 25%.
*/

int main() {

	float valorSalario;
	
	printf("indique o valor do salario :?");
	scanf("%f",&valorSalario);
	
	float aumento = 25;
	
	float salarioAumentado = ( valorSalario * aumento / 100 );
	valorSalario + salarioAumentado;
	
	printf("com o valor do aumento de %.1f o valor final e de: %.2f\n",aumento ,valorSalario);
	
	return 0;
}
