#include <stdio.h>

int main(void) {

    int iTemperature = 45;

    if (iTemperature >= 80) {
        // Turn AC on
        printf("\nThe AC is on\n");
    } else {
        // Turn AC off
        printf("\nThe AC is off\n");
    }
    return (0);
}