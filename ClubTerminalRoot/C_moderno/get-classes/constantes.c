#include <stdio.h>
#define HELLO "Hello, constant!"

int main(){
    const char hello[] = "Hello constant, again!";
    printf("Constant Macro HELLO: %s\n", HELLO);
    printf("Constant literal hello: %s\n", hello);
    return (0);
}
