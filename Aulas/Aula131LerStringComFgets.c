#include <stdio.h>
#include <stdlib.h>
/*
			Aula 131: Lendo uma String com a função fgets()
			
*/
int main(){
	
	char palavras[10] = {"oi. vamos aprender a programar com a linguagem C?"};
	
	printf("Digite seu nome: ");
	//scanf("%100[^\n]", palavras);
	fgets(palavras, 10, stdin);// file
	
	printf("\n%s\n", palavras);
	return 0;
}
