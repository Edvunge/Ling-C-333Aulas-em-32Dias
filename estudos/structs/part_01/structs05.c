#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

struct Student getStudent() {
    struct Student s;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter age: ");
    scanf("%d", &s.age);

    return s;
}

int main(void) {
    struct Student s1 = getStudent();
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    return (0);
}
