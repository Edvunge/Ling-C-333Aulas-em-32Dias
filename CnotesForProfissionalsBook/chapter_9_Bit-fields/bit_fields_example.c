#include <stdio.h>
#include <stdlib.h>

struct encoderPosition {
    unsigned int encoderCounts : 23;
    unsigned int encoderTurns  :  4;
    unsigned int _reserved     :  5;
};

int main(void) {
    
    return(0);
}