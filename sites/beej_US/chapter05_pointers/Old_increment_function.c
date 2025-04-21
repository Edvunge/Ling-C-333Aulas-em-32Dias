#include <stdio.h>

void increment(int *p) {
    *p = *p + 1;
}

int main(void) {
    int i = 10;
    int *j = &i;

    print("i is %d\n", i);
    print("i is also %d\n", *j);

    increment(j);

    print("i is %d\n", i);
    return (0);
}