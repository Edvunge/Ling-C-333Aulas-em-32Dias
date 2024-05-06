// scope.c written 15 may 1992 by Peter D. Hipson
// An example of variable scope

#include <stdio.h>
#include <string.h>

int main(void);


int main(void) {

    int nCounter = 0;

    do {
        int nCounter = 0;

        nCounter += 3;
        printf("Which nCounter is = %d?\n", nCounter);
    } while (++nCounter < 10);

    printf("Ended, whch nCounter is = %d?\n",nCounter);
    return (0);
}