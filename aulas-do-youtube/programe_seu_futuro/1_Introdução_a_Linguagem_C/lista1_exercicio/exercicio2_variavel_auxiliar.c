#include <stdio.h>
#include <stdlib.h>
/*
2) Elabore um algoritmo que receba, por meio do teclado, dois valores, 
um para a vari�vel �a� e um para a vari�vel �b�. 
Em seguida, fa�a os passos que julgar necess�rio para que ao final, a vari�vel
�a� possua o valor que inicialmente estava em �b� e a 
vari�vel �b� possua o valor que inicialmente estava em �a�. 
Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
*/
int main(void) {
	int a, b, aux = 0;
	
	printf("Digite o valor de a: \n");
	scanf("%d",&a);
	
	printf("Digite o valor de b: \n");
	scanf("%d",&b);
	
	aux = a;
	a = b;
	b = aux;
	
	printf("a = %d , b = %d",a ,b);
	return 0;
}
