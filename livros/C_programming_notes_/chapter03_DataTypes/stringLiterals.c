#include <stdio.h>

int main(void) {
    
    char* str = "hello, world"; // string literal

    // string literals can be used to initialize arrays
    char a1[]  = "abc";
    char a2[4] = "abc";
    char a3[3] = "abc";

    printf("str: %s", &str);
    return (0);
}


