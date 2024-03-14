#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int a = 10, b;
    char c[] = "abc", *d;

    b = a;
    a = 20;
    printf("%d %d\n",a ,b);

    d = c;

    c[1] = 'x';

    printf("%s %s\n", c, d);

    return (0);
}