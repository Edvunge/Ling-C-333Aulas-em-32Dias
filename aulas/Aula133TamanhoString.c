#include <stdio.h>
#include <stdlib.h>
/*
			Aula 133: Como descubrir o tamanho de uma string			
*/
int main(){
	
	int i, tam = 0;
	char palavras[55] = {"oi. vamos aprender a programar com a linguagem C?"};
	
	//printf("Digite seu nome: ");
	//scanf("%100[^\n]", palavras);
	fgets(palavras, 15, stdin);// file
	
	i = 0;
	while(palavras[i] != '\0'){
		if(palavras[i] == '\n')
			palavras[i] = '\0';
		i++;
	}
	
	
	i = 0;
	while(palavras[i] != '\0'){
		//printf("%d =%d\n", i, palavras[i]);
		tam++;
		i++;
	}	
	printf("Tamanho: %d\n", tam);
	
	return 0;
}
