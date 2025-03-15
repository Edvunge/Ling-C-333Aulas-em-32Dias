#include <stdio.h>

int main(void) {
    int b = 4;
    int d = 4;
    
    b--;
    printf("b = %d\n", b);

    if (d-- < 4) {
        printf("This will never print\n");
    } else {
        printf("This will print\n");
    }
    return (0);
}

