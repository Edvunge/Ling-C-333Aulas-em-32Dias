#include <stdio.h>
#include <stdlib.h>

/*
	5) Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e
		imprima a média semestral. Faça com que o programa só aceite notas válidas 
		(uma nota válida deve pertencer entre o intervalo de 0 a 10). 
		Cada nota deve ser validada separadamente.
*/

int main() {
	
	float nota1, nota2, notaValida = 0;  
	

	do{
		printf("\nDigite a nota da primeira frequencia:");
		scanf("%f",&nota1);
	}while( nota1 < 0 || nota1 > 10 );
	
	do{
		printf("\nDigite a nota da segunda frequencia:");
		scanf("%f",&nota2);
	}while( nota2 < 0 || nota2 > 10 );
	
	float media = ( nota1 + nota2 ) / 2.00; 
	printf("\nO resultado da Media Semestral e de: %.2f ",media);
	
	return 0;
}
