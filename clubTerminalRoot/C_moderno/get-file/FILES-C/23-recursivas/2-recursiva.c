#include <stdio.h>
#include <unistd.h>

void elefantes(int numero){
  if(numero % 2 != 0){
    if(numero == 1){
      printf("%d elefante incomoda muita gente.\n", numero);
    }else{
      printf("%d elefantes incomoda muita gente.\n", numero);
    }
  }else{
    printf("%d elefantes incomodam muita MAIS!\n", numero);
  }
  sleep(1);
  elefantes(++numero);
}

int main(int argc, char** argv){
  elefantes(1);
  return 0;
}

