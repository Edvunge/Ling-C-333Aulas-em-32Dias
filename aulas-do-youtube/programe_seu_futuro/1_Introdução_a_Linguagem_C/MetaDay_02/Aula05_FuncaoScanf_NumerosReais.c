#include <stdio.h>
#include <stdlib.h>

/*
                        Aula 5
                Lendo números Reais
*/

int main(void) {

  // tipo nome:
  float numero = 3.1415;

  printf("Valor da minha variavel: %.2f\n", numero);

  printf("Digite um numero real: ");
  scanf("%f", &numero);

  printf("Valor lido: %.3f\n", numero);
  return (0);
}
