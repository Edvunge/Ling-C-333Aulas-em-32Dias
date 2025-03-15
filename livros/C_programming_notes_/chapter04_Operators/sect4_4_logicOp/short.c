#include <stdio.h>

int main(void) {
    int a = 20;
    int b = -5;

    if (a != 20 && b == -5) {
        printf("I won't be printed!\n");
    }

    return (0);
}
