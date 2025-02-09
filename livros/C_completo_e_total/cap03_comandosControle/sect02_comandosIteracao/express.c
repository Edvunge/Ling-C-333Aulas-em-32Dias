#include <stdio.h>

int sqrNum(int num);
int readNum(void);
int prompt(void);

int main(void){
	int t;

	for (prompt(); t = readNum(); prompt())
		sqrNum(t);
}

prompt(void){
	printf("Digite um numero: ");
	return 0;
}

readNum(void) {
	int t;
	scanf("%d", &t);
	return t;
}

sqrNum(void) {
	printf("%d\n", num*num);
	return num*num;
}







