#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



/*
	Aula 30
	tabela ascii e acentua�ao
	1 byte (8 bits) -> -128 at� 127
	unsigned 1 byte -> 0 at� 255
	
	9 � o caractere de tabula��o \t.
	10 � o caractere de nova linha \n (enter).
	65 � a letra A maiuscula.
	66 � a letra B maiscula.
	90 � a letra Z maiuscula.
	
	1� = setelocale(LC_ALL, NULL); // padr�o da ling C 
	2� = setelocale(LC_ALL, ""); // padr�o do sistema operacional
	3� = setelocale(LC_ALL, "Portuguese"); // portugues brasileiro
	 
*/

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	printf("cora��o");
	return 0;
}
