#include <stdio.h>

int main(void) {
    int i = 10;

    if (i > 10) {
        printf("Yes, i is greater than 10.\n");
        printf("And this will also printf if i is greater than 10.\n");
    }

    if (i <= 10) printf("I Is less than or equal to 10\n");
    return(0);
}