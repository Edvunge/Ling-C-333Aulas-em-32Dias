#include <stdio.h>

struct s {
    char a;
    int b;
    double c;
    char d[10];
};

int main(void) {
    // declare s1 as a variable of type struct
    struct s s1;
    
    // set a, b and c to a value of their respective type
    s1.a = 'H';
    s1.b = 42;
    s1.c = 3.14;

    // set d to the string "Hello" by setting each character individually
    s1.d[0] = 'H';
    s1.d[1] = 'e';
    s1.d[2] = 'l';
    s1.d[3] = 'l';
    s1.d[4] = 'o';
    s1.d[5] = '\0';// null-character to terminate the string

    printf("s1.a: %c\n", s1.a);
    printf("s1.b: %i\n", s1.b);
    printf("s1.c: %f\n", s1.c);
    printf("s1.d: %s\n", s1.d);
    return (0);
}