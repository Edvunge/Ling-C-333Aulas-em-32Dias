#include <stdio.h>
#include <stdlib.h>

/*
                        Aula 7
                Lendo caracteres
                Função Getchar()
*/

int main(void) {

  char letra;

  printf("Digite uma letra: ");
  letra = getchar();

  printf("Caracter lido: %c\n", letra);
  return (0);
}
