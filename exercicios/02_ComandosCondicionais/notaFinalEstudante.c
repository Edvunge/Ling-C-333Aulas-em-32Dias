#include <stdio.h>
#include <stdlib.h>

/*
14. A nota final de um estudante e calculada a partir de tres notas atribuidas entre o intervalo
de 0 ate 10, respectivamente, a um trabalho de laboratorio, a uma avaliacao semestral
e a um exame final. A media das tres notas mencionadas anteriormente obedece aos
pesos: Trabalho de Laboratorio: 2; Avaliacao Semestral: 3; Exame Final: 5. De acordo
com o resultado, mostre na tela se o aluno esta reprovado (media entre 0 e 2,9), de
recuperacao (entre 3 e 4,9) ou se foi aprovado. Faca todas as verificacoes necessarias.
*/

int main() {
	
	float trabalhoLaboratorio = 2, exameFinal = 5, mediaFinal, avaliacaoSemestral = 3;
	
	mediaFinal =  ( trabalhoLaboratorio + exameFinal + avaliacaoSemestral  ) / 3;
	
	if(mediaFinal >= 0 && mediaFinal <= 2.9){
		printf("\nAluno Reprovado.");
	} else if(mediaFinal >= 3 && mediaFinal <= 4.9) {
		printf("\nAluno em Recuperacao.");
	} else if(mediaFinal >= 5){
		printf("\nAluno Aprovado.");
	}
	return 0;
}
