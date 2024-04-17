#include <stdio.h>
#define HELLO "Essa é minha constante como Macro"
#define X 20

int main(){
  const char hello[] = "Essa é minha constante literal";
  const int x = 10;
  //x = 9;
  printf("%s\n", hello);
  printf("%d\n", x);
  printf("%d\n", X);
  return 0;
}

