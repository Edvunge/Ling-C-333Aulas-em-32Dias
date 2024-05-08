#include <stdio.h>
#include "myFile.h"

void printValue() {
    printf("Global variable: %d", x);
}

int main(void) {
    printValue();
    return (0);
}