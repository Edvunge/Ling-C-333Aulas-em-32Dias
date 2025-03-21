#include <stdio.h>

int main(void) {

    const int x = 10;
    printf("Initial Value of Constant: %d\n", x);

    int* y = &x;

    *y = 100;
    printf("Value of Constant after change: %d", x);

    return (0);
}