#include <stdio.h>
#include <stdlib.h>

/*
                        Aula 22
                operador long para o tipo double
                double -> %lf
                long double -> %lf
*/

int main(void) {
  float x = 3.1415;

  long double y = 3.1415589674;

  printf("Valor de y: %lf\n", y);

  printf("Um double precisa de %d bytes de memoria.\n", sizeof x);

  return (0);
}
