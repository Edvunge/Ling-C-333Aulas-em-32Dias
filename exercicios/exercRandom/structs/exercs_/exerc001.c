#include <stdio.h>
#include <string.h>

/*
1. Crie uma estrutura chamada "Aluno" com o nome dos membros, 
idade e notas totais. 
Escreva um programa em C para inserir dados de dois alunos, 
exibir suas informações e encontrar a média das notas totais.
*/


struct Aluno {
	char nome[25];
	int idade;
	double nota_totais;
};


int main(void){
	
	struct Aluno aluno1;
	struct Aluno aluno2;
	
	
	strcpy(aluno1.nome, "Edvaldo");
	aluno1.idade = 25;
	aluno1.nota_totais = 12.34;


	strcpy(aluno2.nome, "Da costa");
	aluno2.idade = 32;
	aluno2.nota_totais = 34.54;


	printf("A idade do %s eh %d anos\nA nota final: %.1f \n", aluno1.nome, aluno1.idade ,aluno1.nota_totais);
	printf("\nA idade do %s eh %d anos\nA nota final: %.1f \n", aluno2.nome, aluno2.idade ,aluno2.nota_totais);
	return(0);
}
