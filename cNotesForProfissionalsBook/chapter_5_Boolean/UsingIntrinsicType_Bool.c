#include <stdio.h>

int main(void) {
    _Bool x = 1;
    _Bool y = 0;

    if(x) {
            puts("This will print!");
    }

    if (!y) {
            puts("This will also print!");
    }
    return (0);
}