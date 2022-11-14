#include <stdio.h>
#include <stdlib.h>

/*
	2) Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores
		são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos e positivos.
*/

int main() {
	
	int num1, num2, num3, num4, num5, positivos = 0, negativos = 0;
	
	printf("insira o primeiro valor inteiro.\n");
	scanf("%d",&num1);
	
	printf("insira o segundo valor inteiro.\n");
	scanf("%d",&num2);
	
	printf("insira o terceiro valor inteiro.\n");
	scanf("%d",&num3);
	
	printf("insira o quarto valor inteiro.\n");
	scanf("%d",&num4);
	
	printf("insira o quinto valor inteiro.\n");
	scanf("%d",&num5);
	
	if( num1 < 0 ){
		negativos++;
	} else {
		positivos++;
	} 
	
	
	if( num2 < 0 ){
		negativos++;
	} else {
		positivos++;
	} 
	
	
	if( num3 < 0 ){
		negativos++;
	} else {
		positivos++;
	} 
	
	
	if( num4 < 0 ){
		negativos++;
	} else {
		positivos++;
	} 
	
	
	if( num5 < 0 ){
		negativos++;
	} else {
		positivos++;
	}
	
	printf("\nPositivos: %d\nNegativos: %d\n", positivos, negativos); 
	return 0;
}
