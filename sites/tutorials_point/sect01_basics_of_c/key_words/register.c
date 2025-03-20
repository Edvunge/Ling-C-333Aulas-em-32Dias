#include <stdio.h>

void register(int, int);

int main(void) {

    int a = 5, b = 7;
    register(a, b);

    return (0);
}

void register(int a, int b) {
    printf("%d", a+b);
}