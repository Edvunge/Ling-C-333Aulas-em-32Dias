#include <stdio.h>

int main(void) {

    int x = 42, y = 42;
    printf("%i\n", (x *= 2, y));

    return (0);
}

