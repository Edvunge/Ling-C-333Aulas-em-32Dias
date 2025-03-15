#include <stdio.h>

int main(void) {
    int a = 1;
    int c = 1;
    
    a++;
    printf("a = %d\n", a);

    if (++c > 1) {
        printf("This will print\n");
    } else {
        printf("This will never print\n");
    }
    return (0);
}

