#include <stdio.h>
#include <unistd.h> // access

int main(int argc, char** argv){
  
  if(access("arquivo.txt", W_OK)){
    printf("Vc não tem permissão de escrita!\n");
    return 1;
  }

  FILE * file = fopen("arquivo.txt", "a");
  fputs("Uma nova linha sem substituir\n", file);
  fclose(file);
  return 0;
}

