#include <stdio.h>

struct marks {
    int phy;
    int che;
    int math;
};

int main(void) {
    struct marks m1 = {50, 60, 70};

    printf("phy: %d. math: %d. che: %d. ",m1.phy, m1.math, m1.che);
    return (0);
}