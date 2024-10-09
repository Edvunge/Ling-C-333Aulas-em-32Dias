#include <stdio.h>

int main() {

    int x, y, answer;

    printf("Select a number\n");
    scanf("%d", &x);

    printf("select another number\n");
    scanf("%d", &y);

    answer = x + y;
    printf("Answer is: %d\n", answer);
    return (0);
}