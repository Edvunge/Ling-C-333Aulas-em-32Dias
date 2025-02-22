#include <stdio.h>

/*
5. Build a new program that prompts a user for data and
determines a commission using the following formula:
Commission = Rate * (Sales Price – Cost).
*/

int main(void) {
    float commission, rate, salesPrice, cost;

    printf("what is the value of rate, salesPrice, cost: \n");
    scanf("%f%f%f",&rate, &salesPrice, &cost);
    
    commission = rate * (salesPrice - cost);
    printf("The value for commission: %.2f\n",commission);
    return (0);
}