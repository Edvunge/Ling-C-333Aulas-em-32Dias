#include <stdio.h>

int main(void) {
    int k = 0;
    int sumk = 0;

    for (sumk = 1, k = 1; k < 10; k++, sumk += k) 
        printf("\%5d\%5d\\n", k, sumk);

    return (0);
}
