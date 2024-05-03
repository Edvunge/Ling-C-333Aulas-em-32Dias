#include <stdio.h>

int main(void) {

    struct {
        unsigned int uint3 : 3;
    } small;

    unsigned int value = 255 - 2;
    small.uint3 = value;
    printf("%d", small.uint3);

    for (small.uint3 = 0; small.uint3 < 8; small.uint3++) {
        printf("%d\n", small.uint3);
    }
    return (0);
}