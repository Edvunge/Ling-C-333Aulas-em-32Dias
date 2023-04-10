#include <stdio.h>
#include <stdlib.h>

/*
1 - Faça um programa que peça dois números e verifique 
(usando if e else) e imprima o maior deles  
*/
int main(void) {
   
  int num1, num2;

  printf("Digite um numero:?");
  scanf("%d",&num1);

  printf("Digite um numero:?");
  scanf("%d",&num2);

  if(num1 > num2) {
      printf("%d e o maior.",num1);
  } else {
      printf("%d e o maior.",num2);
  }
    return 0;
}