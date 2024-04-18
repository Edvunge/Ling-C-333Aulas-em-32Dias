#include <stdio.h>

int main(void) {
    float notas[10] = {5.0, 5.5, 8.8, 8.1, 9.2, 10.0, 10.0, 10.0, 5.2, 8.0};
    int i;

    for (i = 0; i < 10; i++) {
        printf("Nota %i igual a %.1f\n",i,notas[i]);
    }
    return (0);
}