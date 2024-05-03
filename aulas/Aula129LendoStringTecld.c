#include <stdio.h>
#include <stdlib.h>
/*
			Aula 129: Lendo uma String com a função scanf()
			scanf("%80[^\n]",str);
*/
int main(){
	
	char palavras[100] = {"oi. vamos aprender a programar com a linguagem C?"};
	
	printf("Digite seu nome: ");
	scanf("%100[^\n]", palavras);
	
	printf("\n%s\n", palavras);
	return 0;
}
