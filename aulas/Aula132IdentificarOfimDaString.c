#include <stdio.h>
#include <stdlib.h>
/*
			Aula 132: Como identificar o fim de uma string
			
*/
int main(){
	
	int i;
	char palavras[55] = {"oi. vamos aprender a programar com a linguagem C?"};
	
	//printf("Digite seu nome: ");
	//scanf("%100[^\n]", palavras);
	fgets(palavras, 50, stdin);// file
	
	i = 0;
	while(palavras[i] != '\0'){
		printf("%d =%d\n", i, palavras[i]);
		i++;
	}	
	printf("\n");
	
	return 0;
}
