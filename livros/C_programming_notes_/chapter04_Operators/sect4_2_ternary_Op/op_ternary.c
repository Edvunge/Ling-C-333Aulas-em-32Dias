#include <stdio.h>

int main(void) {

    int x = 5;
    int y = 42;
    printf("%i, %i\n", 1 ? x : y, 0 ? x : y); 

    return (0);
}
