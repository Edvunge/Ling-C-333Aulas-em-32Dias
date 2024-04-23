#include <stdio.h>

typedef union {
    struct {
        unsigned int a:2;
        unsigned int b:1;
        unsigned int c:3;
        unsigned int d:1;
        unsigned int e:1;
    };
    uint8_t data;
} union_bit;


int main(void) {
    union_bit un_bit;
    un_bit.data = 0x00;
    un_bit.a = 2;

    printf("%d", un_bit.a);
    
    return (0);
}