#include <stdio.h>

int main(void) {
    int speed = 0;
    int time = 0;

    printf("Speed: "); // Input processing
    scanf("%d", &speed); // Output processing

    printf("Time: ");
    scanf("%d", &time);

    int distance = speed * time;

    printf("Distance: %d\n", distance);
    return (0);
}