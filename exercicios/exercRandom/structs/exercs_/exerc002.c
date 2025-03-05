#include <stdio.h>

/*
2. Defina uma estrutura chamada Time com membros horas, minutos e segundos.
Escreva um programa em C para inserir dois horários,
adicione-os e exiba o resultado no formato de hora apropriado.
*/

struct Time {
	int horas;
	int minutos;
	int segundos;
};

int main(void) {

	struct Time time1; 
	struct Time time2;

	time1.horas = 21;
	time1.minutos = 35;
	time1.segundos = 15;

	time2.horas = 10;
	time2.minutos = 53;
	time2.segundos = 12;

	printf("Wed 5 Mar %d:%d:%dhm\n", time1.horas, time1.minutos, time1.segundos);
	printf("Thu 6 Mar %d:%d:%dhm\n", time2.horas, time2.minutos, time2.segundos); 
	return (0);
}
