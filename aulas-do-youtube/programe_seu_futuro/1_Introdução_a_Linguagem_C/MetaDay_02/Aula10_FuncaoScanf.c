#include <stdio.h>
#include <stdlib.h>

/*
                        Aula 10
                Lendo varios valores
*/

int main(void) {

  int num1, num2, num3;

  printf("Digite Tres Valores Inteiros: ");
  scanf("%d%d%d", &num1 , &num2 , &num3 );

  printf("Valores lido: %d , %d e %d \n", num1 , num2 , num3);
  return (0);
}
