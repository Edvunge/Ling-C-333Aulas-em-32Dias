#include <stdio.h>
#include <stdlib.h>

/*
	2. Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9
*/
int main() {
	
	int i, num = 9;

	for(i = 1; i <= 9; i++){
		printf("%d * %d = %d\n",num , i ,num * i);
	}
	return 0;
} 
