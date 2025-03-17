#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool x = true;
    bool y = false;

    if (x) {
        puts("This will print!");
    }
    if (!y) 
    {
        puts("This will also print!");
    }
}