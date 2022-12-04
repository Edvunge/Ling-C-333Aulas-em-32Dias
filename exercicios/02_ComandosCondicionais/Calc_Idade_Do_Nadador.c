#include <stdio.h>
#include <stdlib.h>
/*
	27. Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
	seguintes categorias:

	a) 5 a 7 printf("Infantil A");
	b) 8 a 10 printf("Infantil A");
	c) 11 a 13 printf("Infantil A");
	d) Senior > 18 printf("Senior");
*/

int main() {
	int idade;
    
    printf("Insira a sua idade:?");
    scanf("%d",&idade);
    
	if ( idade > 5 && idade < 7 ){ 
		printf("Infantil A");	
	} else if ( idade > 8 && idade < 10 ) {
		printf("Infantil B");
	} else if ( idade > 11 && idade < 13 ) {
		printf("Juvenil A");
	} else if ( idade > 14 && idade < 17 ) {
		printf("Juvenil B");
	} else if( idade > 18 ) {
		printf("Senior.");
	}
	return 0;
}
