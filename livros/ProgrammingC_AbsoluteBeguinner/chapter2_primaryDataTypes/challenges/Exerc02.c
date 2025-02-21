#include <stdio.h>

/*
2. Create a program that uses the same formula above to output
the result; this time, however, prompt the user for the values
a, b, x, and y. Use appropriate variable names and naming
conventions.
*/

int main(void) {

    int result = 44,
    a_tim      = 55, 
    b_mit      = 66, 
    x_etim     = 77, 
    y_time     = 88;

    result = ((a_tim * b_mit) * (x_etim * y_time));
    printf("%d = (%d * %d) * (%d * %d) ",result ,a_tim ,b_mit ,x_etim ,y_time);

    return (0);
}