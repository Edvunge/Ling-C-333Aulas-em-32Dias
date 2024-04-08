#include <stdio.h>

extern volatile unsigned int stop_now;

int main(void) {
    if (! stop_now) {
        printf("Hello, world!\n");
        sleep(30);
    }
    return (0);
}