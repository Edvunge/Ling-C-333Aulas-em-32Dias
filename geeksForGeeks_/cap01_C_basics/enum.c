#include <stdio.h>

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

int main(void) {
    enum week day;
    day = Wed;
    printf("%d", day);
    return (0);
}