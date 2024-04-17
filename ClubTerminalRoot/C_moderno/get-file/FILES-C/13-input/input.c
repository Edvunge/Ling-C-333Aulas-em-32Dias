#include <stdio.h>

int main(){
  const int tam = 100;
  char name[tam];

  printf("Escreva seu nome: ");
  fgets(name, tam, stdin);
  fflush(stdin);

  int age = 0, year = 0;
  printf("Informe sua idade: ");
  scanf("%d", &age);
  //printf("A idade que vc informou foi: %d\n", age);

  printf("Informe o ano que vc nasceu: ");
  scanf("%d", &year);

  //printf("O ano foi: %d\n", year);
  //printf("O ano é: %d e a idade é: %d\n", year, age);
  printf("A idade, ano que nasceu e nome são: %d, %d e %s", age, year, name);
  //printf("O seu nome é: %s", name);
  return 0;
}

