#include <stdio.h>

enum week{Mon=10, Tue, Wed, Thur, Fri=10, Sat=16, Sun};

int main() {
    printf("The value of enum week: %d\n",Mon);
    return (0);
}