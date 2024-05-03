#include <stdio.h>

int main(void) {
    // increment / Decrement Operator
    int a = 1;
    int b = 4;
    int c = 1;
    int d = 4;

    a++;
    printf("a = %d\n",a);

    b--;
    printf("b = %d\n",b);

    if(++c > 1) {
        printf("This will print\n");
    } else {
        printf("This will never print\n");
    }

    if(d-- < 4) {
        printf("This will print\n");
    } else {
        printf("This will never print\n");
    }
    return (0);
}