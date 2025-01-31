#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct {
	int    nMatricula;
	char   codDisciplina[7];
	float  nota[3];
	float  media;
} cursos;

int main() {

	cursos.nMatricula = 3209918;
	strcpy(cursos.codDisciplina, "MAT105");
	cursos.nota[0] = 12.0;
	cursos.nota[1] = 9.7;
	cursos.nota[2] = 11.3;
	cursos.media = (cursos.nota[0] + cursos.nota[1] + cursos.nota[2])/3.0;

	printf("\nMatricula: %d ",cursos.nMatricula);
	printf("\nMedia  : %.2f",cursos.media);
	return 0;	
}
