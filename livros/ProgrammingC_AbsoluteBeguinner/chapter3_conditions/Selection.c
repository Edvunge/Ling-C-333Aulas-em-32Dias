#include <stdio.h>

int main(void) {

    int iSelection = 0;
    float fTransAmount = 0.0;
    float fBalance = 100.25;

    printf("\n\tATM\n");
    printf("\n1\tDeposit Funds\n");
    printf("2\tWithdraw Funds\n");
    printf("\nEnter your selection: ");
    scanf("%d", &iSelection);

    if (iSelection == 1) {
        printf("\nEnter fund amount to deposit: ");
        scanf("%f", &fTransAmount);
        printf("\nYour new balance is: $%.2f\n", fBalance + fTransAmount);
    }

    if (iSelection == 2) {
        printf("\nEnter fund amount to Withdraw: ");
        scanf("%f", &fTransAmount);

        if (fTransAmount > fBalance)
            printf("\nInsufficient funds\n");
        else 
            printf("\nYour new balance is $%.2f\n", fBalance - fTransAmount);    
    }
    return (0);
}