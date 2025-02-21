#include <stdio.h>

/*
3. Create a program that prompts a user for her name. Store the
user’s name using the scanf() function and return a greeting
back to the user using her name.
*/

int main(void) {
    
    int hours = 0;
    char name[20];

    printf("\nWhat time is: %d\n",hours);

    printf("\nWhats is your name: ");
    fgets(name, sizeof(name), stdin);

    if (hours >= 6 && hours <= 11) {
        printf("\nGood Morning %s\n",name);
    } else if (hours >= 12 && hours <= 17) {
        printf("\nGood Afternoon %s\n",name);
    } else if (hours >= 18 && hours <= 23) {
        printf("\nGood Evening %s\n",name);
    } else if (hours >= 0 && hours <= 5) {
        printf("\nGood Morning %s\n",name);
    }
    return (0);
}