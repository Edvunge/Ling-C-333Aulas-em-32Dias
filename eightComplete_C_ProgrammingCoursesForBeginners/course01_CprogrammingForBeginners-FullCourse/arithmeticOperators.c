#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x = 11, y = 3;
    
    int div = x / y;
    int mod = x % y;

    printf("Div: %d\n", div);
    printf("Mod: %d\n", mod);
    return (0);
}