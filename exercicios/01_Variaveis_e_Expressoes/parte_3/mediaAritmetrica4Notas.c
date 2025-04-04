#include <stdio.h>
#include <stdlib.h>

/*
        29. Leia quatro notas, calcule a m´edia aritm ´ etica e imprima o resultado.
*/

int main() {

	int nota1, nota2, nota3, nota4;
	
	printf("insira quatro valores para as notas: ");
	scanf("%d%d%d%d",&nota1, &nota2 ,&nota3, &nota4);
	
	int  mediaAritmetrica = ( (nota1 + nota2 + nota3 + nota4) / 4 );
	printf("o resultado da mediaAritmetrica sera de: %d", mediaAritmetrica );
	
	return 0;
}
