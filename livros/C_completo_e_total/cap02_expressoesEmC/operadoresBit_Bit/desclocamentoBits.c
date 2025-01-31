#include <stdio.h>

int main(void){

	unsigned int i;
	int j;
	
	i = 1;
	
	// deslocamentos a esquerda
	for (j = 0; j < 4; j++) {
		i = i << 1;

		printf("deslocamento a esquerda %d: %d\n",j ,i);
	}

	// deslocamento a direita 
	for (j = 0; j < 4; j++) {
		i = i >> 1;

		printf("deslocamento a direita %d:%d\n",j ,i);
	}	
}

