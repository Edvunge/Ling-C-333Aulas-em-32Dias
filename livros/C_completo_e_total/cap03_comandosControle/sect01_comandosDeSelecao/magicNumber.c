#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int magic; // número mágico
	int guess; // palpite do usuário
	
	magic = rand();

	printf("adivinhe o numero magico: ");
	scanf("%d", &guess);

	if(guess == magic) printf("** Certo **");
	return (0);
}
