#include <stdio.h>
#include <stdlib.h>
// https://terminalroot.com.br/2022/07/como-verificar-qual-o-sistema-operacional-com-cpp.html

int main(int argc, char** argv){

#if defined(__linux__) // Ou #if __linux__
  system("touch knasdkasbdkjabs.mp4");
  printf("O nome do meu usuário é: %s\n", getenv("USER"));
#elif _WIN32 || _WIN64 || __CYGWIN__
  system("nul > knasdkasbdkjabs.mp4");
  printf("O nome do meu usuário é: %s\n", getenv("USERNAME"));
#endif

  return 0;
}

