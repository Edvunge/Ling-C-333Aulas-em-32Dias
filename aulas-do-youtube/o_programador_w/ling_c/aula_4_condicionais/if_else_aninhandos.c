#include <stdio.h>

int main(int argc, char** argv){

	int idade = 0;

	printf("entre com idade:");
	scanf("%d", &idade);

	if (idade > 40) {
		printf("idade > 40\n");
	} else {
		printf("idade: %d.\n",idade);
		printf("presta atencao eecoloca 40\n");
	}
	return (0);
}
