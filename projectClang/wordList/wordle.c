/* wordle.txt */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define ResultGreen    1
#define ResultYellow   2
#define ResultRed      4

struct s_result {
    char color;
}

Result cc(char,char,int,char*);
int main();

Result cc(char correct, char guess, int idx, char *word) {

}

int main(void) {

    printf("Hello, World!");
    return (0);
}