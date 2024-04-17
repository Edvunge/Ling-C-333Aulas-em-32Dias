#include <stdio.h>

void oi(){
  printf("Olá, Mundo!\n");
  oi();
}

int main(int argc, char** argv){
  oi();
  return 0;
}

