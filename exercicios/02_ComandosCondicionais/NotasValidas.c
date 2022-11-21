#include <stdio.h>
#include <stdlib.h>


/*
8. Faca um programa que leia 2 notas de um aluno, verifique se as notas sao validas e
exiba na tela a media destas notas. Uma nota valida deve ser, obrigatoriamente, um
valor entre 0.0 e 10.0, onde caso a nota nao possua um valor valido, este fato deve ser
informado ao usuario e o programa termina.
*/

int main() {
	
	float nota1, nota2, media;
	
	printf("insira as duas notas:?\n");
	scanf("%f%f",&nota1,&nota2);  
	
	if(nota1 > 0.0 || nota2 >= 10.0 ){
		media = (nota1+nota2/2);
		printf("A media das notas e de: %.2f",media);
	} else {
		printf("Notas Invalidas.");
	}
	return 0;
}
