#include <stdio.h>

void imprime(char * nomes, int qtd){
  //int qtd2 = sizeof(nomes) / sizeof(nomes[0]);
  printf("QTD: %d\n", qtd);
  //printf("%s\n", nomes);
}

int main(){
  char nomes[][7] = {"João", "José", "Maria", "Alguém", "Novo"};
  printf("%s\n", nomes[1]);

  int qtd = sizeof(nomes) / sizeof(nomes[0]);
  printf("QTD: %d\n", qtd);

  imprime(*nomes, qtd);
  return 0;
}

