#include <stdio.h>
#include <stdlib.h>
/*
	Exercício 3
 		Fazer um algoritmo que escreva o conceito de um aluno, dada a sua nota. 
	  	Supor notas inteiras somente. 
		O critério para conceitos é o seguinte:
	
	Nota 							Conceito
	nota inferiores a 3			 	conceito E
	nota de 3 a 5 					conceito D
	notas 6 e 7 					conceito C
	notas 8 e 9 					conceito B
	nota 10 						conceito A
*/

int main() {
	
	int nota;

	printf("Insira a sua nota:?");
	scanf("%d",&nota);

	if (nota < 3){
		printf("conceito E\n");
	} else if( nota > 3 && nota <= 5 ){
		printf("conceito D");
	} else if( nota >= 6 && nota <= 7 ){
		printf("conceito C");
	} else if( nota >= 8 && nota <= 9 ){
		printf("conceito B");
	} else {
		printf("conceito A\n");
	}
	return 0;
} 
