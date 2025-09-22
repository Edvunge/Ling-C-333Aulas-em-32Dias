#include <stdio.h>
#include <stdlib.h>

/*
                        Aula 20
                tamanho de um float na memoria
                %f
*/

int main(void) {
  short float x = 3.1415;

  printf("Um float precisa de %d bytes de memoria.\n", sizeof x);

  return (0);
}
