#include <stdio.h>
#include <stdlib.h>

/*
	Aula 69: Difereenças entre FOR, While e DO { } WHILE.
*/

int main() {
	
		int i;

		printf("\nGerado com For: ");
		for(i = 0; i <= 10; i++){
			printf("%d",i);
		}
		
		printf("\n\nGerado com While: ");
		while(i <= 10){
			printf("%d", i++);
			
		}
		
		printf("\n\n\nGerado com Do While: ");	
		do{
			printf("%d",i);
			i++;
		}while(i <= 10);
	return 0;
}
