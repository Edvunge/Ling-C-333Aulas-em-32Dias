// LIFETIME.c , written 15 may 1992 by Peter D. Hipson 
// An example of variable lifetime.
#include <stdio.h>
#include <string.h>

int nLife = {5};

int main(void);

void DisplayLife(void);


int main() {

    int nCounter = 0;

    do {
        int nCountLoop = 0;

        nCountLoop += 3;

        nLife += nCounter;
        printf("nCountLoop is = %d\n", nCountLoop);
    } while(++nCounter < 10);

    DisplayLife();

    printf("Ended, nCounter is = %d\n", nCounter);

    return (0);
}


void DisplayLife() {
    printf("DisplayLife(), nLife = %d?\n", nLife);
}