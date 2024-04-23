#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void f(int x[][4]) {
    assert(sizeof(*x) == sizeof(int) * 4);
}


void g(int (*x)[4]) {
    assert(sizeof(*x) == sizeof(int) * 4);
}

void h(int **x) {
    assert(sizeof(*x) == sizeof(int*));
}

int main(void) {
    int foo[2][4];
    f(foo);
    g(foo);

    int **bar = malloc(sizeof(*bar) * 2);
    assert(bar);
    for (size_t i = 0; i < 2; i++) {
        bar[i] = malloc(sizeof(*bar[i]) * 4);
        assert(bar[i]);
    }

    h(bar);

    for (size_t i = 0; i < 2; i++) {
        free(bar[i]);
    }
    free(bar);
}