#include <stdio.h>
#include <stdlib.h>

struct book {
    char title[10];
    double price;
    int pages;
};

int main(void)
{
    struct book b1 = {"Learn C", 675.50, 325};
    printf("Title: %s\n", b1.title);
    printf("Price: %lf\n", b1.price);
    printf("No of pages: %d\n", b1.pages);
    printf("size of book struct: %d", sizeof(struct book));
    return (0);
}