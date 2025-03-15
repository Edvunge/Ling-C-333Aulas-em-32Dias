#include <stdio.h>

int main(void) {

    char ch = 'a';
    printf("%zu\n", sizeof(ch));
    printf("%zu\n", sizeof ch);
    return (0);
}
