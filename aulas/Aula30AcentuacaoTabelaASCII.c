#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



/*
	Aula 30
	tabela ascii e acentuaçao
	1 byte (8 bits) -> -128 até 127
	unsigned 1 byte -> 0 até 255
	
	9 é o caractere de tabulação \t.
	10 é o caractere de nova linha \n (enter).
	65 é a letra A maiuscula.
	66 é a letra B maiscula.
	90 é a letra Z maiuscula.
	
	1ª = setelocale(LC_ALL, NULL); // padrão da ling C 
	2ª = setelocale(LC_ALL, ""); // padrão do sistema operacional
	3ª = setelocale(LC_ALL, "Portuguese"); // portugues brasileiro
	 
*/

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	printf("coração");
	return 0;
}
