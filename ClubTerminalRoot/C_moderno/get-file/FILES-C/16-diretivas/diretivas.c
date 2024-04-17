#include <stdio.h>

int main(){

#if defined(MSDOS) || defined(_WIN32) || defined(_WIN64)
  printf("ESTOU NO DOS/Windows\n");
#elif defined(__linux__)
  printf("ESTOU NO Linux\n");
#elif defined(__APPLE__)
    printf("Estou no macOS\n");
#elif defined(__ANDROID__)
    printf("Estou no __ANDROID__\n");
#else
  printf("ESTOU em Outro sistema\n");
#endif

  return 0;
}

