#include <stdio.h>

void function() {
    int x = 20;
    static int y = 30;
    x = x + 10;
    y = y + 10;
    printf("\tLocal: %d\n\nStatic: %d\n", x, y);
}

int main(void) {
    printf("First Call\n");
    function();

    printf("Second Call\n");
    function();

    printf("Third Call\n");
    function();
    return (0);
}