#include <stdio.h>
/*
4. Create a new program that prompts a user for numbers and
determines total revenue using the following formula: Total
Revenue = Price * Quantity.
*/
int main(void){
    float totalRevenue, price, quantity;

    printf("What is the price and quantity: \n");
    scanf("%f%f", &price , &quantity);

    totalRevenue = price * quantity;

    printf("The value of total revenue: %.2f\n",totalRevenue);
    return (0);
}