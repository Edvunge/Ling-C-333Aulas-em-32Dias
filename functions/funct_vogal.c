#include <stdio.h>
#include <stdlib.h>

int IsVogal(char ch){
    if(ch == 'a' || ch == 'A'){
        printf("E uma vogal.");
    } else if(ch == 'e' || ch == 'E'){
        printf("E uma vogal.");
    } else if(ch == 'i' || ch == 'I'){
        printf("E uma vogal.");
    } else if(ch == 'o' || ch == 'O'){
        printf("E uma vogal.");
    } else if(ch == 'u' || ch == 'U'){
        printf("E uma vogal.");
    } else {
        printf("Nao e uma vogal.");
    }
}

int main(void){
    IsVogal('p');
    return 0;
}