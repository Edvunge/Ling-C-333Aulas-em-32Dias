#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char * string = "hello world";

    char const * str = "hello world";

    char const string_arr[] = "hello world";

    char modifiable_string = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0'};
    
    return (0);
}