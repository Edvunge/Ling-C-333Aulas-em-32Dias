#include <stdio.h>

struct s {
    char a;
    int b;
    double c;
    char d[10];
};

int main(void) {
    struct s s1;
    
    struct s *sp = &s1;

    sp->a = 'H';
    sp->b = 42;
    sp->c = 3.14;


    s1.d[0] = 'H';
    s1.d[1] = 'e';
    s1.d[2] = 'l';
    s1.d[3] = 'l';
    s1.d[4] = 'o';
    s1.d[5] = '\0';

    printf("s1->a: %c\n", s1.a);
    printf("s1->b: %i\n", s1.b);
    printf("s1->c: %f\n", s1.c);
    printf("s1->d: %s\n", s1.d);
    return (0);
}