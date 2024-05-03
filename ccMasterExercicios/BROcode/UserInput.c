#include <stdio.h>
#include <stdlib.h>

int main(void){
    int age;
    char name[25];

    printf("\nWhat's your name?");
    scanf("%s",&name);

    printf("how old are you?");
    scanf("%d",&age);

    printf("\nHello %s, how are you?", name);
    printf("\nyou are %d years old",age);
    return 0;
}