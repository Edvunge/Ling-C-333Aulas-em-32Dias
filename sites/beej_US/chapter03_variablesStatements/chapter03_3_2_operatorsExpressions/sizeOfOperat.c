#include <stdio.h>

int main(void){
    int a = 999;

    // %zu is the format specifier for type size_t    
    printf("%zu\n", sizeof a);
    printf("%zu\n", sizeof(2 + 7));
    printf("%zu\n", sizeof 3.14);
    return (0);
}