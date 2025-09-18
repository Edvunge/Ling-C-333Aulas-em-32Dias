#include <stdio.h>
#include <stdlib.h>

/*
                        Aula 12
                Problema ao ler caracter com a linguagem C
*/

int main(void) {

  char sexo;
  int idade;
  float peso, altura;

  printf("Digite sexo (f, F, m ou M), idade, peso e altura:\n ");
  scanf("%c%d%f%f",&sexo , &idade , &peso , &altura );

  // buffer do teclado -> \n2.f \n1.6\n

  printf("Sexo: %c\nIdade: %d\nPeso: %.1f\nAltura: %.2f\n", sexo, idade, peso, altura);
  return (0);
}
