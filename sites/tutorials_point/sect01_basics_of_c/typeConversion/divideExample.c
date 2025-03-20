#include <stdio.h>
#include <stdlib.h>

float divide(int, int);

int main() {
    int x = 10, y = 4;
    float z = divide(x,y);

    printf("%f", z);

    return (0);
}

float divide(int a, int b){
    return (float)a/b;
}