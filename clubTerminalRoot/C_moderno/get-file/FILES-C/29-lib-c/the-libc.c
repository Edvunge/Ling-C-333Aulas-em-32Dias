#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

char * strtoupper(char s[]){
  for(char *p = s; *p; ++p){
    *p = toupper(*p);
  }
  return s;
}

int main(int argc, char** argv){
  char str[] = "Hello";

  printf("A string str em MAIUSCULO: %s\n", strtoupper(str));

  if( strcmp(str, "HELLO") == 0){
    printf("IGUAIS!\n");
  }else{
    printf("Diferentes.\n");
  }

  printf("A raiz quadrada de 9 eh: %.0lf\n", sqrt(9));

  return 0;
}

