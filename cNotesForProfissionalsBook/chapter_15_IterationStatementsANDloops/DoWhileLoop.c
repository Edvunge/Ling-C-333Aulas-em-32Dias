#include <stdio.h>

int main(void) {
    int num, sum;
    num = sum = 0;

    do {
        scanf("%d", &num);
        sum += num;
    } while (sum < 50);
    return (0);
}