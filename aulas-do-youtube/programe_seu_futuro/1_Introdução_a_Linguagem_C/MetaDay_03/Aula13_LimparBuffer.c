#include <stdio.h>
#include <stdlib.h>

/*
                        Aula 12
                Ler dois caracteres
*/

int main(void) {

  char a, b;

  printf("Digite duas letras: \n ");
  scanf("%c%c", &a , &b );

  // espaço entre os %c => f\n comando para o computador desconsiderar o ENTER, o TAB e o ESPAÇO
  // buffer =>
  // fflush();
  
  printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);
  return (0);
}
