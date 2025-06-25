#include <stdio.h>
#include <stdlib.h>


int main(void){

    int grade = 0;

    printf("Grade: ");
    scanf("%d", &grade);

    if(grade >= 50) { 
        printf("Pass!\n");
        printf("Congrats!\n");
    } else {
        printf("Fail!\n");
    }
    return (0);
}