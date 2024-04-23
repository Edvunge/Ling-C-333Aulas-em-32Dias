#include <stdio.h>

int main(){


#if defined(MSDOS) || defined(_WIN32) || defined(_WIN64)
    printf("ESTOU NO DOS/WINDOWS\n");
#elif defined(__linux__)
    printf("ESTOU NO LINUX\n");
#else
    printf("ESTOU EM OUTRO SISTEMA\n");
#endif

    return (0);
}