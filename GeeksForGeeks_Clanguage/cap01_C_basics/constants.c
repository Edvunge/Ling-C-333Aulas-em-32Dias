#include <stdio.h>

int main(void) {

    const int c_var = 20;
    const int* const ptr = &c_var;
    printf(" %ls ", ptr);

    return (0);
}