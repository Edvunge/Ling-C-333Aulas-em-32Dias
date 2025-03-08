#include <stdio.h>
#include <string.h>


int main(void) {
    
    char greeting[] = "Hello world!";
    printf("string: %s", greeting);

    printf("\n\nnova forma de imprimir na tela\n\n");

    for (int i = 0 ; i < greeting; i++) {
        printf("string #2: %s", greeting);
    }

    return (0);
}

