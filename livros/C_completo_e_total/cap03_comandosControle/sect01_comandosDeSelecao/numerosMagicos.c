#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int magic;
	int guess;

	magic = rand();

	printf("adivinhe o numero magico: ");
	scanf("%d", &guess);

	if(guess == magic) printf("** Certo **");
	else printf("Errado");
}
