#include <stdio.h>
#include <stdlib.h>
/*
			Aula 130: Lendo uma String com a função gets()
			
*/
int main(){
	
	char palavras[100] = {"oi. vamos aprender a programar com a linguagem C?"};
	
	printf("Digite seu nome: ");
	//scanf("%100[^\n]", palavras);
	gets(palavras);
	
	printf("\n%s\n", palavras);
	return 0;
}
