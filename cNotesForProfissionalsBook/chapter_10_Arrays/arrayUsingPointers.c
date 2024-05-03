#include <stdio.h>

#define SIZE (10)

int main() {
    size_t i = 0;
    int *p = NULL;
    int a[SIZE];

    for (i = 0; i < SIZE; ++i) {
        a[i] = i * i;
    }

    for (p = a; p < a + SIZE; ++p) {
        printf("%d\n", *p);
    }
    
    return (0);
}