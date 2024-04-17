#include <stdio.h>
#include <stdlib.h> // rand e srand
#include <time.h> // time
#include <stdbool.h>
// https://www.geradordecpf.org/

void gen_cpf(int*);
bool check_cpf(int*);

int main(int argc, char** argv){
  srand(time(NULL));

  int cpf[11];
  gen_cpf(cpf);

  int qtd = sizeof(cpf) / sizeof(cpf[0]);

  printf("CPF: ");
  for (size_t i = 0; i < qtd; ++i) {
    printf("%d", cpf[i]);
  }
  printf("\n");


  printf("FORMATADO: ");
  for (size_t i = 0; i < qtd; ++i) {
    printf("%d", cpf[i]);
    if(i == 2 || i == 5){
      printf(".");
    }else if(i == 8){
      printf("-");
    }
  }
  printf("\n");

  const char * cpfsite = "00564989935";
  int validar[11];
  printf("O CPF ");
  for (size_t i = 0; i < 11; ++i) {
    validar[i] = (int)cpfsite[i] - 48;
    printf("%d", validar[i]);
  }
  printf(" é ");

  if(check_cpf(validar)){
    printf("Válido!\n");
  }else{
    printf("Inválido!\n");
  }

  return 0;
}

void gen_cpf(int cpf[11]){
  for (size_t i = 0; i < 9; ++i) {
    cpf[i] = rand() % 10;
  }

  int sum = 0;
  for (size_t i = 0; i < 9; ++i) {
    sum += cpf[i] * (10 - i);
  }
  int num1 = 11 - (sum % 11);
  if(num1 >= 10){
    num1 = 0;
  }
  cpf[9] = num1;

  sum = 0;
  for (size_t i = 0; i < 10; ++i) {
    sum += cpf[i] * (11 - i);
  }
  int num2 = 11 - (sum % 11);
  if(num2 >= 10){
    num2 = 0;
  }
  cpf[10] = num2;
}

bool check_cpf(int cpf[11]){
  int sum = 0;
  int dig1 = cpf[9];
  int dig2 = cpf[10];

  for (size_t i = 0; i < 9; ++i) {
    sum += cpf[i] * (10 - i);
  }
  int num1 = 11 - (sum % 11);
  if(num1 >= 10){
    num1 = 0;
  }
  cpf[9] = num1;

  sum = 0;
  for (size_t i = 0; i < 10; ++i) {
    sum += cpf[i] * (11 - i);
  }
  int num2 = 11 - (sum % 11);
  if(num2 >= 10){
    num2 = 0;
  }
  cpf[10] = num2;

  return (dig1 == num1 && dig2 == num2);
}
