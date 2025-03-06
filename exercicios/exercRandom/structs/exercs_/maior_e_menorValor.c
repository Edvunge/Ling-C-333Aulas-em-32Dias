#include <stdio.h>

int main(void) {
	
	int num[] = {12,36,78,90,7,5};
	int maxValue = 0;
	int minValue = 100;

	for (int i = 0; i < 6; i++){
		if (num[i] > maxValue) {
			maxValue = num[i];
		} else {
			minValue = num[i];
		}
	}
	
	printf(" \n MAIOR & MENOR NUMEROS: \n ");
	printf("Max value: %d\n",maxValue);
	printf("Min value: %d\n",minValue);
	
	return (0);
}
