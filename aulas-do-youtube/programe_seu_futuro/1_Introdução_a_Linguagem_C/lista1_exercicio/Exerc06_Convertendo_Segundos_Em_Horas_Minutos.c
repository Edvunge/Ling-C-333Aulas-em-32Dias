#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int segundos, h, m, s, resto;

    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &segundos);

    h = segundos / 3600;
    resto = segundos % 3600;
    m = resto / 60;
    s = resto % 60;

    printf("%d:%d:%d\n", h, m, s);

    return (0);
}