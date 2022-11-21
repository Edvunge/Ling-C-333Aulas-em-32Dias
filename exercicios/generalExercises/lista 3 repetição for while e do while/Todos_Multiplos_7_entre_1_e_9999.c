#include <stdio.h>
#include <stdlib.h>

/*
	6) Faça um programa que imprima na tela todos os múltiplos de 7 entre 1 e 9999.
*/

int main() {
	
	int num;  
	
	for(num = 1; num <= 9999; num++){
		if(num  % 7 == 0){	
			printf("%4d ",num);
		}
	}
	
	// outra versao mais eficiente
	
	/*
	for(num = 7; num <= 9999; num+=7){	
			printf("%4d ",num);
	}
	*/
	return 0;
}
