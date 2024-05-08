#include <stdio.h>

int main(void) {

    int not_constant;

    const int constant = 20;

    not_constant = 40;
    constant = 22;

    return (0);
}