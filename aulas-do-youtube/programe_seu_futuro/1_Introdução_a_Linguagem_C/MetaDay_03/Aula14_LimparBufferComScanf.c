#include <stdio.h>
#include <stdlib.h>

/*
                        Aula 14 - Limpar Buffer com Scanf
                Ler dois caracteres
*/

int main(void) {

  char a, b;

  printf("Digite uma letra: \n ");
  scanf("%c", &a);

  // buffer
  scanf("c");

  printf("Digite uma letra: \n ");
  scanf(" %c", &b );

  // espaço entre os %c => f\n comando para o computador desconsiderar o ENTER, o TAB e o ESPAÇO
  // buffer =>
  // fflush(); 100%

  printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);
  return (0);
}
