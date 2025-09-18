#include <stdio.h>
#include <stdlib.h>

/*
                        Aula 9
                Lendo caracteres
                Função fgetc()
*/

int main(void) {

  char letra;

  printf("Digite uma letra: ");
  letra = fgetc(stdin);

  printf("Caracter lido: %c\n", letra);
  return (0);
}
