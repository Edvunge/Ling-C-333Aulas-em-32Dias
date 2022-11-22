#include <stdio.h>
#include <stdlib.h>

/*
13. Faca um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e
a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a media do aluno
e indicar se o aluno foi aprovado ou reprovado. A nota para aprovacao deve ser igual ou
superior a 60 pontos.
*/

int main() {
	
	float nota1, nota2, nota3, mediaPonderada;
	
	printf("insira as 3 Notas das provas: ?\n");
	scanf("%f%f%f",&nota1, &nota2 ,&nota3);  
	
	mediaPonderada =  (  (nota1 * 1) + (nota2 * 1) + (nota3 * 2) ) / 1 + 1 + 2;
	
	if(mediaPonderada >= 60){
		printf("\nAluno Aprovado.");
	} else {
		printf("\nAluno Reprovado.");
	}
	return 0;
}
