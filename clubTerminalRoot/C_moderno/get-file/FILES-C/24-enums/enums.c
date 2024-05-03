#include <stdio.h>

enum Logs {
  success = 0,
  warning = 130,
  error = 1,
  info = 241
};

int main(int argc, char** argv){
  enum Logs s = success, w = warning, e = error, i = info;
  printf("Sucesso é: %d\n", s);
  printf("Warning é: %d\n", w);
  printf("Erro é: %d\n", e);
  printf("Info é: %d\n", i);
  return error;
}

