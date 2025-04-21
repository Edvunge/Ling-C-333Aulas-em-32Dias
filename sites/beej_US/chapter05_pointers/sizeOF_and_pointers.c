#include <stdio.h>

int main(void) {

    int *p;

    printf("%zu\n", sizeof p);

    printf("%zu\n", sizeof *p);

    return (0);
}
