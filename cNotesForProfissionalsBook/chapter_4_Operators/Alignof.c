#include <stdio.h>

int main(void) {
    printf("Alignment of char = %zu\n", alignof(char));
    printf("Alignment of max_align_t = %zu\n", alignof(max_align_t));
    printf("Alignof(float[10]) = %zu\n", alignof(float[10]));
    printf("Alignment(struct{char c; int n;}) = %zu\n", alignof(struct {char c; int n:}));

    return (0);
}