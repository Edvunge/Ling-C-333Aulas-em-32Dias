#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
			Aula 134: Como descubrir o tamanho de uma string com funcao strlen()			
*/
int main(){
	
	//int tam;
	char palavras[55] = {"oi. vamos aprender a programar com a linguagem C?"};
	
	//printf("Digite seu nome: ");
	//scanf("%100[^\n]", palavras);
	fgets(palavras, 15, stdin);// file
	
	//tam = strlen(palavras);
		
	//printf("Tamanho: %d\n", tam);
	
	
	printf("Tamanho: %d\n", strlen(palavras));
	
	return 0;
}
