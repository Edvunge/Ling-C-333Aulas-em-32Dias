#include <stdio.h>
#include <stdlib.h>

/*
                        Aula 27
                Operador de incremento ++
*/

int main(void) {

  int resultado, contador = 10;

  //contador++;
  //contador += 1;
  //contador = contador + 1;

  resultado = contador++;
  
  printf("Valor: %d\n", contador++);
  printf("Valor: %d\n", contador);
  return (0);
}
