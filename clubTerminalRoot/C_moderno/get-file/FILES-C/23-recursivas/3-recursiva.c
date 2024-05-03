#include <stdio.h>

int fatorial(int numero){
  return (numero <= 1) ? 1 : numero * fatorial(numero - 1);
}

int fibonacci(int numero){
  if(numero == 0){
    return 0;
  }
  return (numero == 1) ? 1 : fibonacci(numero - 1) + fibonacci(numero - 2);
}

int main(int argc, char** argv){
  int num = 13;
  printf("O fatorial no número %d é igual a: %d\n", num, fatorial(num));

  printf("A sequência de fibonacci até a posição %dº é: ", num);
  for (size_t i = 0; i < num; ++i) {
    printf(" %d", fibonacci(i));
  }
  printf("\n");

  return 0;
}

