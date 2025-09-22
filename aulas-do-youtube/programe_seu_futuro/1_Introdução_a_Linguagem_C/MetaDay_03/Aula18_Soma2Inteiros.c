#include <stdio.h>
#include <stdlib.h>

/*
                        Aula 19
                Operador long para o tipo int
                %li / %ld
*/

int main(void) {
  long int x = 214748647;

  printf("Tamanho de x em bytes: %d\n", sizeof x);

  printf("Valor de x: %d\n", x);
  x++;
  printf("Valor de x: %hi\n", x);

  return (0);
}
