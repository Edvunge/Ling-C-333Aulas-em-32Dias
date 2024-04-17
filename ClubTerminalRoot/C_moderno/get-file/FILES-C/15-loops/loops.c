#include <stdio.h>
#include <stdbool.h>

int main(){
  /*for(int i = 0; i < 10; ++i){
    if(i == 5){
    break;
    }
    printf("O valor de i é: %d\n", i);
    }*/

  int i = 0;
  while(true){
    /*if(i == 5){
      break;
    }*/
    ++i;
    printf("O valor de i é: %d\n", i);
  }

  /*do {
    printf("O valor de i é: %d\n", i);
    }while(i < 10);*/

  return 0;
}

