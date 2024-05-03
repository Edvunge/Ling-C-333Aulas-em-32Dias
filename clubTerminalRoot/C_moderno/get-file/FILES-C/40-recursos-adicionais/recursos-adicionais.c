#include <stdio.h>

int main(){
  const char* unicode = "☎ "; 
  const char* hello = "Linguagem C";
  printf("\033[30 \u2665\033[30;0m %s \033[m\n", hello);
  printf("\033[31;1m \u2665\033[36;2m %s \033[m\n", hello);
  printf("\033[32;1m \u2665\033[37;2m %s \033[m\n", hello);
  printf("\033[33;1m \u2665\033[38;3m %s \033[m\n", hello);
  printf("\033[34;1m \u2665\033[39;4m %s \033[m\n", hello);
  printf("\033[35;1m \u2665\033[40;5m %s \033[m\n", hello);
  printf("%s\n", unicode);
  return 0;
}
// Para obter unicodes acesse: https://home.unicode.org/
// Para saber o número de um unicode específico: 
// copia e cola no google com a palavra unicode: ☎  unicode
// https://www.google.com/search?q=☎ +unicode
// U+260E -> 260E → \u260E
