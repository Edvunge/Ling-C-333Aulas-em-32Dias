#include <stdio.h>
#include <stdlib.h>
/*
46. Faça um programa que leia um número inteiro positivo de três dı́gitos (de 100 a 999).
Gere outro número formado pelos dı́gitos invertidos do número lido. Exemplo:

    NúmeroLido = 123
    NúmeroGerado = 321
*/

int inverter(int num);

int main() {
	int num;
	
	printf("\nDigite um numero inteiro positivo: ");
  scanf("%d", &num);
	num = inverter(num);
	printf("\nNumero invertido: %d\n\n", num);
	
	system("pause");
	return 0;
}

int inverter(int num) {
	int aux = 0;
	while (num > 0) {
	  aux *= 10; 
    aux += num%10; 
    num /= 10; 
  }
  return aux;
}