#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main(void) {
    
    struct Student s1 = {"John Doe", 20};
    printf("\nName: %s\n", s1.name);
    printf("Age: %d\n", s1.age);

    return (0);
}

