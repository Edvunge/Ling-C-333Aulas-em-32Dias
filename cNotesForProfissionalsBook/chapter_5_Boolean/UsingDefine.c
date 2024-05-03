#include <stdio.h>

#define bool int 
#define true 1
#define false 0

int main(void) {
    bool x = true;
    bool y = false;

    if(x) {
            puts("Thi will print!");
    } 
    
    if(!y) {
            puts("This will also print!");
    }
    return (0);
}