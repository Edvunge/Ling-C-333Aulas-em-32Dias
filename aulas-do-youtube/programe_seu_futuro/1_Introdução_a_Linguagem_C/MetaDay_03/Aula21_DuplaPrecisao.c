#include <stdio.h>
#include <stdlib.h>

/*
                        Aula 21
                tipo double
                %lf
*/

int main(void) {
  float x = 3.1415;
  double y = 3.1415589674;

  printf("Um double precisa de %d bytes de memoria.\n", sizeof x);

  return (0);
}
