#include <stdio.h>

int main(void) {
    int a = 1;

    switch (a) {
    case 1:
        puts("a is 1");
        break;
    case 2:
        puts("a is 2");
        break;
    default:
        puts("a in neither 1 or 2");
        break;
    }

    // This example is equivalent to:
    int a1 = 1;

    if (a1 == 1) {
        puts("a is 1");
    } else if (a1 == 2) {
        puts("a is 2");
    } else {
        puts("a is neither 1 or 2");
    }
    return (0);
}