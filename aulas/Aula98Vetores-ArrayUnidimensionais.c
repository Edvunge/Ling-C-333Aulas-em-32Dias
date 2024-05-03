#include <stdio.h>
#include <stdlib.h>

/*
	Aula 98: vetores(array unidimensionais)  
	Como criar um vetor?
*/
int main() {
	
		// vetor do tipo inteiro chamado num1 com tamanho 10.
		int num1[10];
		
		/* vetor do tipo inteiro chamado num2. 
		Observe que n�o foi informado o tamanho mas foi informado um conjunto de dados. 
		Neste caso o vetor ter� o mesmo tamanho do conjunto informado, tamanho 5.
		*/
		int num2[] = {1,2,3,4,5};
		
		/* vetor do tipo inteiro chamado num3. 
		Observe que foi informado o tamanho do vetor e um conjunto de dados MENOR que o tamanho do vetor. 
		Neste caso as duas posi��es finais do vetor, �ndices 3 e 4, ser�o preenchidas com zero.
		*/
		int num3[5] = {1,2,3};
		
		/* vetor do tipo inteiro chamado num4. 
		Observe que foi informado o tamanho do vetor e um conjunto de dados MAIOR que o tamanho do vetor. 
		Neste caso � considerado o tamanho informado entre o par de colchetes. 
		Assim, os elementos excedentes no conjunto ser�o perdidos, neste caso e elemento 6.
		*/
		int num4[5] = {1,2,3,4,5,6};
		
		/* vetor do tipo inteiro chamado num5. 
		Observe que foi informado o tamanho do vetor e um conjunto de dados menor que o tamanho do vetor. 
		Neste caso, como j� vimos, as demais posi��es ser�o preenchidas com zero, 
		preenchendo todo o vetor com zero.
		*/
		int num5[5] = {0};
		
		char letras1[100]; // vetor do tipo char chamado letras1 com tamanho 100.
		
		/* vetor do tipo char chamado vogais com tamanho 5. 
		Observe que para informar um conjunto de caracteres, cada um precisa estar entre aspas simples.
		*/
		char vogais[5] = {'a','e','i','o','u'};
		
		float notas[3] = {7.3, 8.5, 4.6}; // vetor do tipo float chamado notas e preenchido com tr�s notas.
		
	return 0;
}