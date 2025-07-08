#include <stdio.h>

struct Point {
    int x, y;
};

void printPoint(struct Point p) {
    printf("%d, %d", p.x, p.y);
}

int main(void) {

    printPoint((struct Point){2, 3});

    return (0);
}

