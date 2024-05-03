#include <stdio.h>

int dobro(int x){
  return x * 2;
}

int multiplica(int x, int y){
  return x * y;
}

void diga(int (*pdobro2)(int)){
  printf("O dobro de 9 é %d\n", pdobro2(9));
}

int main(){
  int (*pdobro)(int) = &dobro;

  int (*pmultiplca)(int,int) = &multiplica;
  printf("3 vezes 6 é: %d\n", pmultiplca(3,6));

  diga(pdobro);
  return 0;
}

