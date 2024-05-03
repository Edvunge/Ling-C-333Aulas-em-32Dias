#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compare(char const *lhs, char const *rhs) {
    int result = strcmp(lhs, rhs);
    if (result < 0) {
        printf("%s comes before %s\n", lhs, rhs);
    } else if (result == 0){
        printf("%s equals %s\n",lhs, rhs);
    } else {
        printf("%s comes after %s\n", lhs, rhs);
    }
}


int main(void) {

    compare("BBB", "BBB");
    compare("BBB", "CCCCCC");
    compare("BBB", "AAAAAA");
    return (0);
}