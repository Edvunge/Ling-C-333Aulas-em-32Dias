#include <stdio.h>

int main(void) {
    
    int i, j, x;
    i = 2147483000;
    j = 2147483000;
    x = i + j; // overflow
               
    printf("x vale: %d", x);
    return (0);
}

