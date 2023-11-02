#include <stdio.h>
#include <stdlib.h>
/*
2) Elabore um algoritmo que receba, por meio do teclado, dois valores, 
um para a variável “a” e um para a variável “b”. 
Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a 
variável “b” possua o valor que inicialmente estava em “a”. 
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
