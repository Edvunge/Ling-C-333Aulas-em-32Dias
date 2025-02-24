#include <stdio.h>

int main(void) {

    int iResponse = 0;

    printf("\n1\tSports\n");
    printf("2\tGeography\n");
    printf("3\tMusic\n");
    printf("4\tWorld Events\n");
    printf("\nPlease select a category (1-4): ");
    scanf("%d", &iResponse);

    switch (iResponse) {
    case 1:
        printf("\nYou selected sports questions\n");
        break;
    case 2:
        printf("\nYou selected geography questions\n");
        break;
    case 3:
        printf("\nYou selected music questions\n");
        break;
    case 4:
        printf("\nYou selected world event event questions\n");
        break;        
    default:
        break;
    }
    return (0);
}