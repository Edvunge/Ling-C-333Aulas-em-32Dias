#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main(void) {

    struct Student s1;

    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);

    return (0);
}

