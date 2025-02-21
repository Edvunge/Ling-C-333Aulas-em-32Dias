#include <stdio.h>

int main(void){
	
	int operand1 = 0;
	int operand2 = 0;
	int result = 0;

	printf("\n\tAdder Program, by Edvaldo Vunge\n");
	printf("\nEnter first operand: ");
	scanf("%d", &operand1);

	printf("Enter second operand: ");
	scanf("%d", &operand2);

	result = operand1 + operand2;

	printf("The result is %d\n", result);
	return (0);
}
