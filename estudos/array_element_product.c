#include <stdio.h>

int element_product(int array[], int length);

int main(void) {
    int array[] = {2, 5, 3, 4, 2};

    int product = element_product(array, 5);

    printf("product: %d\n", product);

    return (0);
}

int element_product(int array[], int length) {
    int product = 1;

    for (int i = 0; i < length; i++)
        product *= array[i];

    return product;
}

