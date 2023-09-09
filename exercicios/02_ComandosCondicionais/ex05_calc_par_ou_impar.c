#include <stdlib.h>
#include <stdio.h>

/*
5. Faça um programa que receba um número inteiro e verifique se este número é par ou
ı́mpar.
*/

int main(void){

	int num;

	printf("Digite um numero");
	scanf("%d",&num);

	if(num % 2 == 0){
		printf("par ");
	} else {
		printf("impar");
	}
	return 0;
}


