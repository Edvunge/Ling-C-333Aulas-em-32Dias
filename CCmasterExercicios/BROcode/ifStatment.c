#include <stdio.h>
#include <stdlib.h>

int main(voidd){
    int age;

    printf("\nEnter your age: ");
    scanf("%d",&age);

    if(age >= 18){
        printf("You are now signed up!");
    } else {
        printf("anhother option.");
    }
    return 0;
}