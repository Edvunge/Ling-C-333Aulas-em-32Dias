
#include <stdio.h>
#include <stdlib.h>

/*
8. Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e
exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um
valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser
informado ao usuário e o programa termina.
*/

int main(void){
	
	int nota1, nota2, media;

	printf("digite a primeira nota");
	scanf("%d",&nota1);

	printf("digite a segunda nota");
	scanf("%d",&nota2);
	
	media = (nota1 + nota2)/2;

	if( (nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10) ){
		if(media >= 5){
			printf("aluno aprovado");
		} else {
			printf("aluno reprovado");
		}
	} else {
		printf("nao possui nota valida");
	}	

	return 0;	
}
