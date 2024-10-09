#include <stdio.h>

int main(void) {

    float pi, r, answer;

    printf("What is the R in cm? ");
    scanf("%f", &r);

    pi = 3.14;
    answer = r * r * pi;

    printf("The area is %f\n", answer);

    //printf("");

    return (0);
}