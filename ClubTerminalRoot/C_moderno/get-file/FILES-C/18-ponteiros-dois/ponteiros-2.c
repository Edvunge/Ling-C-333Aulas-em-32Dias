#include <stdio.h>

int main(){
  int x = 9;
  int * px = &x;
  int * px2 = px + 1;

  int y = 1 * (*px);

  printf("A qtd de dados de x é: %lu\n", sizeof(int*));

  printf("O endereço de x: %p\n", &x);
  printf("O endereço de px: %p\n", px);
  printf("O endereço de &px: %p\n", &px);
  
  printf("O endereço de px2: %p\n", px2);

  printf("O valor de y é: %d\n", y);
  
  return 0;
}

