#include <stdio.h>
#include <regex.h>

int main(int argc, char** argv){
  regex_t regex;

  int check = regcomp(&regex, "^M", REG_EXTENDED);

  const char * frase = "Linha frase";

  check = regexec(&regex, frase, 0, NULL, 0);

  !check ? printf("Inicia com M!\n") : printf("Outra letra.\n");

  regfree(&regex);
  return 0;
}

