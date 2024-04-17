#include <stdio.h>

int main(){
  int x = 9;
  int * px = &x;
  int ** ppx = &px;
  printf("O valor de x é: %d\n", **ppx);
  return 0;
}

