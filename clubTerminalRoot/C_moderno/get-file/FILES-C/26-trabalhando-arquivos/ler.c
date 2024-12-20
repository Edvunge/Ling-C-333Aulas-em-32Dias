#include <stdio.h>
#include <unistd.h> // access
#include <string.h>

int main(int argc, char** argv){

  if(access("arquivo.txt", F_OK)){
    printf("Esse arquivo não existe!\n");
    return 1;
  }

  if(access("arquivo.txt", R_OK)){
    printf("Esse arquivo não tem permissão de leitura!\n");
    return 1;
  }

  const int TAM = 100;
  FILE * file = fopen("arquivo.txt", "r");
  char conteudo[TAM];

  int line = 1;

  while(fgets(conteudo, TAM, file)){
    if(argc > 1){
      if( strcmp(argv[1],"-n") == 0 || strcmp(argv[1],"--number") == 0 ){
        printf("%d %s", line, conteudo);
        ++line;
      }else{
        printf("Esse parâmetro não existe!\n");
        return 1;
      }
    }else{
      printf("%s", conteudo);
    }
  }
  fclose(file);
  return 0;
}

