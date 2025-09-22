#include <stdio.h>
#include <stdlib.h>

/*
                        Aula 19
                Operador long para o tipo int
                %li / %ld
*/

int main(void) {
  short short int a = 0;
  long long int x = 214748647;

  printf("Tamanho de x em bytes: %d\n", sizeof x);

  printf("Valor de x: %lld\n", x);
  x++;
  printf("Valor de x: %lli\n", x);

  return (0);
}
