#include <stdio.h>

int main(void) {
    // Equals "=="
    1 == 0;
    1 == 1;

    int x = 5;
    int y = 5;
    int *xptr = &x, *yptr = &y;
    xptr == yptr;
    *xptr == *yptr;

    // Not Equals "!="
    1 != 0;
    1 != 1;

    int x = 5;
    int y = 5;
    int *xptr = &x, *yptr = &y;
    xptr != yptr;
    *xptr != *yptr;

    // Not "!"
    
    // !someVal
    

    // Greater Than ">"
    5 > 4; // evaluates to 1
    4 > 5; // evaluates to 0
    4 > 4; // evaluates to 0


    // Less than "<"
    5 < 4;
    4 < 5;
    4 < 4;

    // Greater than or equal ">="
    5 >= 4; 
    4 >= 5;
    4 >= 4;

    // Less than or equal "<="
    5 <= 4; 
    4 <= 5;
    4 <= 4;

    return (0);
}