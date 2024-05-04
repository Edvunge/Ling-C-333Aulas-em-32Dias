#include <stdio.h>

int soma(int x) {
	if(x > 0) {
		return (x + soma(x-1));
	} else {
		return x;
	}
}


int main() {
	int x = 5;

	printf("Soma: %d\n", soma(x));
}
