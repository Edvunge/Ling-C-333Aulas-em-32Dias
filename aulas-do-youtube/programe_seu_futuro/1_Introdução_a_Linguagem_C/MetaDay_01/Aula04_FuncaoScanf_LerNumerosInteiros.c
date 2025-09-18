#include <stdio.h>
#include <stdlib.h>

/*
                        Aula 4
                Lendo números Inteiros
*/ 

int main(void) {

  int valor; // Criei uma variavel para guardar um valor do tipo inteiro

  // atribuição -> atribuir um valor a uma variavel
  valor = 50;

  printf("Digite um valor inteiros: ");
  scanf("%d", &valor);

  printf("\n\nValor da minha variavel: %d\n\n", valor);

  return (0);
}
