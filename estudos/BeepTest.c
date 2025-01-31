#include <stdio.h>

void doisbeep() {
	int k;
	printf("\x7");
	for (k = 1; k < 10000; k++);
	
	printf("\x7");
}

void main() {
	doisbeep();
	printf("Digite um caractere: ");
	getche();
	doisbeep();
}
