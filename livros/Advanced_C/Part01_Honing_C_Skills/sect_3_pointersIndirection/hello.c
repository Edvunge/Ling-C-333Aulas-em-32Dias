#include <stdio.h>

int main(void);

int main() {

    int i;
    int nCount = 0;
    char szString[] = "We want to impress you %d\n";

    for (i = 0; i < 5; i++) {
        nCount += printf(szString, i + 1);
    }

    return (nCount);
}