#include <stdio.h>

int main() {

char cResponse = '\0';

printf("\n\tAC Control Unit\n");
printf("\na\tTurn the AC on\n");
printf("b\tTurn the AC off\n");
printf("\nEnter your selection: ");
scanf("%c", &cResponse);

if (cResponse == 'a')
    printf("\nAC is now on\n");

if (cResponse == 'b')
    printf("\nAC is now off\n");

    return(0);
}