#include <stdio.h>

int main(void) {

    int x = 3;
    int *p = &x;
    printf("%p = %p\n", (void *)&x, (void *)p);

    return (0);
}

