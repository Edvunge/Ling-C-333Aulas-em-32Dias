#include <stdio.h>

int main(int argc, char** argv){
  printf("A qtd de arguntos é: %d\n", argc);
  printf("O valor do array 1: %s\n", argv[0]);

  for (int i = 0; i < argc; ++i) {
    printf("arguntos: %s\n", argv[i]);
  }
  return 0;
}
