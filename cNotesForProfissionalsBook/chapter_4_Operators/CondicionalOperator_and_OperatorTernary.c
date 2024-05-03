#include <stdio.h>

int main(void) {
    int a, b, c, d;

    a = b ? c : d;

    // is equivalent

    if (b)
        a = c;
    else 
        a = d;
    return (0);
}