#include <stdio.h>
#include <stdlib.h>

/*
	Faça um algoritmo que leia a idade e o sexo de uma pessoa.
	Ao final mostre as vagas de emprego
	disponiveis, conforme tabela abaixo:
	
	Vaga 						- Sexo 						-  Idade_Minima
	programador					Masculino      					18
	dba							Mas/Fem							20
	analista de testes			Feminino						25
*/
int main() {
	
	int idade;
	char sexo;
	
	printf("Digite o seu sexo:? (M/F)");
	scanf("%c",&sexo);
	
	printf("Digite a sua Idade:?");
	scanf("%d",&idade);
	
	if ( (sexo == 'M') && (idade <= 18) ){
		printf("Vaga de: Programador\n");
	} else if ( ( (sexo == 'M') || (sexo == 'F') ) && (idade <= 20) ){
		printf("Vaga de: DBA\n");
	} else if ( (sexo == 'F') && (idade <= 25) ){
		printf("Vaga de: Analista de testes\n");
	}
	return 0;
} 
