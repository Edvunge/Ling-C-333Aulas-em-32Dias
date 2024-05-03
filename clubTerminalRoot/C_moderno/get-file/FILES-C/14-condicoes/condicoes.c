#include <stdio.h>

int main(){
  int x = 10;
  /*if(x == 9){
    printf("Sim x é igual a 9\n");
  }else if(x == 10){
    printf("X na verdade é 10\n");
  }else if(x == 11){
    printf("X é igual a 11\n");
  }else{
    printf("Não nem 10 nem 9 e nem 11 x na verdade é: %d\n", x);
  }*/

  /*switch(x){
    case 9:
      printf("Sim x é igual a 9\n");
      break;
    case 10:
      printf("X na verdade é 10\n");
      break;
    case 11:
      printf("X é igual a 11\n");
      break;
    default:
      printf("Não nem 10 nem 9 e nem 11 x na verdade é: %d\n", x);
  }*/

  /*if(x == 9){
    printf("X é 9\n");    
  }else{
    printf("X NÃO é 9\n");
  }*/

  //(x == 9) ? printf("é 9\n") : printf("Não é 9\n");
  printf(x == 9 ? "É 9\n" : "Não é 9, na verdade é: %d\n", x);

  return 0;
}

