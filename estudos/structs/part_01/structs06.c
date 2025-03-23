#include <stdio.h>

struct Student {
    char name[50];
    int marks[3];
};

int main() {
    struct Student s1;
    int total = 0;
    float average;

    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter marks for 3 subjects: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &s1.marks[i]);
        total += s1.marks[i];
    }

    average = total / 3.0;
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);

    return (0);
}
