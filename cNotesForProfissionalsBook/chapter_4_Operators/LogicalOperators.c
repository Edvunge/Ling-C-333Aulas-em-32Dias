#include <stdio.h>

const char *name_for_value(int value);

int main(void) {
    // logical AND
    0 && 0; // returns 0
    0 && 1; // returns 0
    2 && 0; // returns 0
    2 && 3; // returns 1

    // logical OR
    0 || 0; // returns 0
    0 || 1; // returns 1
    2 || 0; // returns 1
    2 || 3; // returns 1

    // logical NOT
    !1; // returns 1
    !5; // returns 1
    !0; // returns 0
    return (0);
}

const char *name_for_value(int value) {
    static const char *names[] = {"zero", "one", "two", "three"};
    enum { NUM_NAMES = sizeof(names) / sizeof(names[0]) };
    return (value >= 0 && value < NUM_NAMES) ? names[value] : "infinity";
}











