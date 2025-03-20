#include <stdio.h>

int main(void) {

    char a = 'e', b = '2', c = 'M';
    char d = (a * b) / c;

    printf("d as int: %d as char: %c", d, d);

    return (0);
}