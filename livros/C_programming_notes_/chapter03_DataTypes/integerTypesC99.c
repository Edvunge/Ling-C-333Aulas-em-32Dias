#include <stdio.h>
#include <stdint.h>

int main(void) {

    uint32_t u32 = 32; // exactly 32-bits wide

    uint8_t u8 = 255; // exactly 8-bits wide

    int64_t i64 = -65; // exactly 64 bit in two's complement representation
    
    printf("\nuint32_t u32: %u", u32);
    printf("\nuint8_t u8: %u", u8);
    printf("\nint64_t i64: %lld\n", i64);
    
    return (0);
}


