#include <stdio.h>

int prod(int x, int y) {
    return (x*y);
}


int main(void) {
    int saida;

    saida = prod(12, 7);
    printf("A saida e: %d\n",saida);
    return (0);
}