#include <stdio.h>

void function() {
    int x = 10;
    auto int y = 20;
    printf("Auto Variable: %d", y);
}

int main() {
    function();
    return (0);
}