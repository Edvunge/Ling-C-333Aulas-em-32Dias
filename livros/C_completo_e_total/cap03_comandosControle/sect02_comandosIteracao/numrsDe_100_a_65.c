#include <stdio.h>

int main(void) {
	int x;
        float z;

	for (x = 100; x != 65; x-=5){
		z = x*x;
		printf("O quadrado de %d, %f",x, z);
	}
	return (0);
}
