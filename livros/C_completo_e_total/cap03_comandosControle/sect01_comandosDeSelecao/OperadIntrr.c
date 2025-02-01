#include <stdio.h>

int main(void) {

	int isqrd, i;

	printf("Digite um numero: ");
	scanf("%d", &i);

	isqrd = i > 0 ?  i * i : -(i*i);

	printf("%d ao quadrado é %d", i, isqrd);
}
