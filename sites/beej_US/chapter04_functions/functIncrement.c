#include <stdio>

void increment(int a) {
    a++;
}

int main(void) {

    int i = 10;

    increment(i);

    printf("i == %d\n", i); 
}