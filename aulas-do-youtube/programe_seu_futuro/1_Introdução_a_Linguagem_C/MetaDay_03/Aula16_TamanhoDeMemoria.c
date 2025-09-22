#include <stdio.h>
#include <stdlib.h>

/*
                        Aula 16
                Operador sizeof

                sizeof x ou sizeof(int)
*/

int main(void) {
  float x = 1.0;

  printf("Tamanho de um float na memoria: %lu bytes\n", sizeof x);
  printf("Tamanho em memoria de int: %lu bytes\n", sizeof(int));

  return (0);
}
