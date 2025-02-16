#include <stdio.h>

int main(void) {
	int x_int, y_int;
	float x_float = 1.2f, y_float = 2.1f;
	char x_char = 'a', y_char = 'b';
	double x_double = 2.1, y_double = 3.4;

	printf("Digite o valor de x_int: ");
	scanf("%d",&x_int);

	printf("Digite o valor de y_int: ");
	scanf("%d",&y_int);


	printf("x_int: %d", x_int);
	printf("y_int: %d", y_int);
    return 0;
}