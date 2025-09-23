#include <stdio.h>
#include <stdlib.h>

/*
                        Aula 22
                operador long para o tipo double
                double -> %lf
                long double -> %lf

                __mingw_printf();
*/

int main(void) {
  float x = 3.1415;

  long double y = 3.1415589674;

  printf("Valor de y: %lf\n", y);
  __mingw_printf("Valor de y: %.15lf\n", y);
  printf("Um double precisa de %d bytes de memoria.\n", sizeof y);

  return (0);
}
