#include <stdio.h>
#include <stdlib.h>

/*
	Leia um numero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.
*/

int main() {

	int num;
	
	printf("indique o valor em inteiro:?");
	scanf("%d",&num);
	
	int antecessor = (num - 1);
	int sucessor = (num + 1);
	
	int sucessorDoTriplo = ( (sucessor*sucessor*sucessor) + (sucessor*sucessor*sucessor) );
	int antecessorDoDobro = (antecessor*antecessor);
	
	printf("o antecessor do dobro e: %d\n",antecessorDoDobro);
	printf("o sucessor do triplo e: %d\n",sucessorDoTriplo);
	
	return 0;
}
