#include <stdio.h>
#include <stdlib.h>
/*
 2- Faça um programa que peça um valor e mostre na tela se o valor é positivo ou negativo 
*/
int main(){
  int num;
  
  printf("Digite um valor:?");
  scanf("%d",&num);

  if (num > 0) {
    printf("Positivo.");
  } else {
    printf("Negativo.");
  }
  return 0;
}