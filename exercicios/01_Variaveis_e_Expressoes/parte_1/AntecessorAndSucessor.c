#include <stdio.h>
#include <stdlib.h>

/*
        31. Leia um numero inteiro e imprima o seu antecessor e o seu sucessor.
*/

int main() {

	int num;
	
	printf("indique o valor em inteiro:?");
	scanf("%d",&num);
	
	int antecessor = (num - 1);
	int sucessor = (num + 1);
	
	printf("o antecessor e: %d\n",antecessor);
	printf("o sucessor e: %d\n",sucessor);
	
	return 0;
}
