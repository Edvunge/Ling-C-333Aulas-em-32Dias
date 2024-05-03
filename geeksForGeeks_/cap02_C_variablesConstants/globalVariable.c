#include <stdio.h>

int x = 20;

void function1() {
    printf("Function 1: %d\n", x);
}

void function2() {
    printf("Function 2: %d\n", x);
}

int main(void) {
    function1();
    function2();
    return (0);
}