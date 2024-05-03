#include <stdio.h>
#include <stdlib.h>

enum Dupes {
    Base,
    One, 
    Two,
    Negative = -1,
    AnotherZone
};

int main(void) {
    printf("Base = %d\n", Base);
    printf("One = %d\n", One);
    printf("Two = %d\n", Two);
    printf("Negative = %d\n", Negative);
    printf("AnotherZero = %d\n", AnotherZone);

    return EXIT_SUCCESS;
}