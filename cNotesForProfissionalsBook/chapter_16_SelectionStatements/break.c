#include <stdio.h>

int main(void) {
    int a = 1;

    switch(a) {
        case 1:
        case 2:
            puts("a is 1 or 2");
        case 3:
            puts("a is 1, 2 or 3");
            break;
        default:
            puts("a is neither 1, 2 nor 3");
    }
    return (0);
}