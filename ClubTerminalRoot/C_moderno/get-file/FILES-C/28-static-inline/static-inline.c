#include <stdio.h>

static inline void incrementar(){
  int x = 1;
  static int y = 1;

  x += 1;
  y += 1;

  printf("x: %d e y: %d\n", x, y);
}

int main(int argc, char** argv){
  incrementar();
  incrementar();
  incrementar();
  incrementar();
  return 0;
}

