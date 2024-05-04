#include <stdio.h>

int main(void) {
    int i;
    
    int numero[5] = {1, 2, 3, 4, 5};
    printf("\nposicao 2 e %i\n",numero[2]);

    numero[2] = 10;
    printf("posicao 2 e %i\n",numero[2]);

    for (i = 0; i < 5; i++) {
        printf("%i\n",numero[i]);
    }
    return (0);
}