#include <stdio.h>

// variable declaration:
extern int a, b;
extern int c;
extern float f;


int main(void) {

    // variable definition:
    int a, b;
    int c;
    float f;

    // actual initialization
    a = 10;
    b = 20;

    c = a + b;
    printf("value of c : %d \n", c);

    f = 70.0/3.0;
    printf("value of f : %f \n", f);
    return (0);
}