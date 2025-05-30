#include <stdio.h>

void print_all(FILE *stream) {
    int c;
    while ((c = getc(stream)) != EOF) 
        putchar(c);
}

int main(void) {
    FILE *stream;

    // call netstat command. petstat is available for Windows and Linux
    if ((stream = popen("netstat", "r")) == NULL)
        return 1;

    print_all(stream);
    pclose(stream);
    return (0);
}