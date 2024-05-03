#include <stdio.h>
#include <stdlib.h>

struct ex1 {
    size_t foo;
    int flex[];
};

struct ex2_header {
    int foo;
    char bar;
};

struct ex2 {
    struct ex2_header hdr;
    int flex[];
};

struct ex3 {
    int foo;
    char bar;
    int flex[];
};

int main(void) { 
    printf("%zu, %zu\n", sizeof(size_t), sizeof(struct ex1));

    printf("%zu, %zu\n", sizeof(struct ex2_header), sizeof(struct ex2));

    printf("%zu, %zu\n", sizeof(int) + sizeof(char), sizeof(struct ex3));
    return (0);
}
