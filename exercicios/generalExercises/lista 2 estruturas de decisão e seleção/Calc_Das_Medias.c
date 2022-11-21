#include <stdio.h>
#include <stdlib.h>

/*
	9) Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
	de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
	a apresente a média:
	Opções:
	• ‘a’ - Aritmética.
	• ‘p’ - Ponderada (pesos: 3,3,4).
*/

int main() {
	
	float notaA, notaB, notaC;
	char  opcao;
		
	printf("\nEscolha uma opcao:?\n");
	printf("\n Insira: \n a - Media Aritmetica.  \n p - Media Ponderada.  \n");
	scanf("%c", &opcao);
        
	printf("insira as tres notas:?");
    scanf("%f%f%f", &notaA, &notaB, &notaC);
		
	float mediaAritmetica = ( notaA + notaB + notaC / 3 ); 
	float mediaPonderada = ( (notaA * 3) + (notaB * 3) + (notaC * 4) / (10) );
		
	if(opcao == 'a'){
			printf("\n\tA Media Aritmetica e de: %.2f\n",mediaAritmetica);
	} else if(opcao == 'p') {
		printf("\n\tA Media Ponderada e de: %.2f\n",mediaPonderada);
	} else {
			printf("\n\tOpcao Invalida.!!\n");
	}
	return 0;
}
