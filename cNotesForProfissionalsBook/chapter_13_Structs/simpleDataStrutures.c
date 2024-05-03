#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};

int main(void){
    struct point p;
    p.x = 5;
    p.y = 3;

    printf("point is (x = %d, y = %d)", p.x ,p.y);
    return (0);
}