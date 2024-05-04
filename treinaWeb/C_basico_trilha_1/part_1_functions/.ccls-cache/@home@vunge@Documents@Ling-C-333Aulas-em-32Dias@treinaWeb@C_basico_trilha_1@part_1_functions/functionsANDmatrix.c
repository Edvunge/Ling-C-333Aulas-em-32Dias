#include <stdio.h>

void main() {
	int numeros[10] = {1,2,3,4,5,6,7,8,9,10};
	func_matriz(numeros);
}

void func_matriz(int num[10]) {
	int i;
	
	for(i=0; i < 10; i++) {
		printf("%i elemento\n",num[i]);
	}
}
