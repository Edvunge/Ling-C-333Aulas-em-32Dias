#include <stdio.h>

int main(void) {
    
    int x = 5; 
    char y = 'c'; 

    float z = 1.5; 
    char const* s = "foo"; 
    int a = 0, b = 0, c = 0;

// Several arithmetical operations have a compound assignment operator.

    a += b;  /* equal to: a = a + b */
    a -= b;  /* equal to: a = a - b */

   // a = b  / equal to: a = a * b */
    
    a /=  b;  /* equal to: a = a /  b */
    a %=  b;  /* equal to: a = a %  b */
    a &=  b;  /* equal to: a = a &  b */
    a |=  b;  /* equal to: a = a |  b */
    a ^=  b;  /* equal to: a = a ^  b */
    a <<= b;  /* equal to: a = a << b */
    a >>= b;  /* equal to: a = a >> b */

    return (0);
}