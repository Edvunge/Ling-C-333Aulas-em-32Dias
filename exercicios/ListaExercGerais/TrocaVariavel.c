#include <stdio.h>
#include <stdlib.h>


/*
	2) 		Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a vari�vel �a� e um
		para a vari�vel �b�. Em seguida, fa�a os passos que julgar necess�rio para que ao final, a vari�vel
		�a� possua o valor que inicialmente estava em �b� e a vari�vel �b� possua o valor que inicialmente
		estava em �a�. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.	 
*/

int main() {

	int a, b;
	
	printf("insira um numero inteiro\n");
	scanf("%d",&a);
	
	printf("insira um outro numero inteiro\n");
	scanf("%d",&b);
	
	int c = a;
	a = b;
	b = c;
	
	printf("a igual: %d\n",a);
	printf("b igual: %d\n",b);
	return 0;
}
