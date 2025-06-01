#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char e1[17] = "erro de leitura\n";
    char e2[17] = "erro de escrita\n";
    char e3[17] = "arquivo nao pode ser aberto\n";

    printf("%s tem comprimento %d\n", e2, sizeof e2);
    return (0);
}