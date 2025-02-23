#include <stdio.h>

int main(void) {
    int a = 5, b = 3;

    printf("%d == %d\n",a == b);// True if a is equivalent to b 
    printf("%d != %d\n",a != b);// True if a is not equivalent to b
    printf("%d  < %d\n",a  < b);// True if a is less than b
    printf("%d  > %d\n",a  > b);// True if a is greater than b
    printf("%d <= %d\n",a <= b);// True if a is less than or equal to b
    printf("%d >= %d\n",a >= b);// True if a is greater than or equal to b
    
    if (a <= 10)
        printf("Success!\n");
    return (0);
}