#include <stdio.h>
#include <stdlib.h>

#define ABC 5

int main(int argc, char** argv) {
    int x = 2;
    int y = ABC;

    int z = x + y;

    printf("y: %d\n", y);
    printf("x: %d\n", x);
    printf("z: %d\n", z);

    return (0);
}
