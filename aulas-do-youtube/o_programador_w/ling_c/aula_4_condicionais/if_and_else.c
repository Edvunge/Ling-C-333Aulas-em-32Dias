#include <stdio.h>

int main(int argc, char** argv) {

	int idade = 0;

	printf("entre com idade:\n");
	scanf("%d",&idade);

	if (idade == 40)
		printf("idade = 40\n");
	else
		printf("idade diferente de 40\n");
	return (0);
}
