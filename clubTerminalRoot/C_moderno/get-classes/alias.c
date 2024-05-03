#include <stdio.h>
#define str char*

int main(int argc, char* argv[]) {
    str a = "oi";
    typedef char* string;
    typedef int num;

    string b = "hey";
    num numero = 9;
    
    printf("%s\n", a);
    printf("%d\n", numero);
    return (0);
}