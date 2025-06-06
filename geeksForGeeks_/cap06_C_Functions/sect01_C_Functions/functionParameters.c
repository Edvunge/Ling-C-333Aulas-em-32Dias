#include <stdio.h>

void printVal(int num, float real){
    printf("%d %f\n", num, real);
}

int main() {
    int a = 3;

    printVal(a, 1.5);
    return (0);
}

