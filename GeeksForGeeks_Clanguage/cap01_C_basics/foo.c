#include <stdio.h>

volatile unsigned int stop_now = 0;
extern void bar_function(void);

int main(void){
    while (1){
        bar_function();
        stop_now = 1;
    }
    return 0;
}