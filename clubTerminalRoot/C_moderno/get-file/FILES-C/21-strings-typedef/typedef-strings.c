#include <stdio.h>
#define str char*

int main(int argc, char** argv){
  typedef char* string;
  typedef int num;
  string a = "Oi";
  num numero = 9;
  printf("%s\n", a);
  printf("%d\n", numero);
  return 0;
}

