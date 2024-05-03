#include <stdio.h>

const char *get_hello() {
    return "Hello, World!"; // safe
}

int main(void) {
    
    char *foo = "hello";
    foo[0] = 'y';

    const char *foo = "hello";
    foo[0] = 'y';

    const char *foo = "hello";
    
    return (0);
}