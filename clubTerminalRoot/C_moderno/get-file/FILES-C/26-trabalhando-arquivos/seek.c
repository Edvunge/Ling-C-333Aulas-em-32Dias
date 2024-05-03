#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
  FILE * file = fopen("dia.txt", "w");

  char conteudo[] = "Isso aqui";

  fputs(conteudo, file);

  fseek(file, strlen(conteudo) - 5, SEEK_SET);

  fputs(" aconteceu!\n", file);

  fclose(file);
  return 0;
}

