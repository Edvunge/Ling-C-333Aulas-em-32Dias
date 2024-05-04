#include <stdio.h>

void main() {
	int x = 10;
	int *point1 = &x;
	int *point2 = point1;

	printf("O endereco do ponteiro 1 eh: %p\nO endereco do ponteiro 2 eh: %p\n",point1,point2);
}
