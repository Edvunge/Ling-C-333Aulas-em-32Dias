#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
	28. Faca um programa que leia tres numeros inteiros positivos e efetue o calculo de uma das
	seguintes medias de acordo com um valor numerico digitado pelo usuario:

*/

int main() {
	float x, y, z, mediaGeometrica, mediaPonderada, mediaHarmonica, mediaAritmetica;
	int escolha; 
    
    printf("\nEscolha um numero para calcular a media:\n ( 1 - mediaGeometrica; 2- mediaPonderada; 3 - mediaHarmonica; 4 - mediaAritmetica ):\n");
	scanf("%d",&escolha);
    
    switch(escolha) {
    	case 1: 
    		printf("Insira 3 numeros inteiros positivos:?");
    		scanf("%d%d%d",&x ,&y ,&z);
    
    		float raiz_cubica = cbrt(x * y * z);
			//raiz_cubica = pow(raiz_cubica,1.0/3.0);
 			
			//mediaGeometrica = raiz_cubica;
			printf("\nO resultado da media Geometrica e de: %.2f ",raiz_cubica);
		break;  
 		case 2:
 			printf("Insira 3 numeros inteiros positivos:?");
    		scanf("%d%d%d",&x ,&y ,&z);
    
			mediaPonderada = ( (x+2*y+3*z) / 6 );
			printf("\nO resultado da media Ponderada e de: %f ",mediaPonderada);
		break;
		case 3:
			printf("Insira 3 numeros inteiros positivos:?");
    		scanf("%d%d%d",&x ,&y ,&z);
			
			mediaHarmonica = ( (1) / ( (1/x) + (1/y) + (1/z) ) );
			printf("\nO resultado da media Harmonica e de: %f ",mediaHarmonica);
		break;
		case 4:
			printf("Insira 3 numeros inteiros positivos:?");
    		scanf("%d%d%d",&x ,&y ,&z);
			
			mediaAritmetica = ( ( x + y + z ) / 3 );
			printf("\nO resultado da media aritmetica e de: %f ",mediaAritmetica);
		break;
		default:
			printf("Numero Invalido , Escolha Errada.");
	}
	return 0;
}
