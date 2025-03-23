#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main(void) {
    
    struct Student students[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", students[i].name);

        printf("Enter age of student %d: ", i+1);
        scanf("%d", &students[i].age);
    }
    
    for (int i = 0; i < 3; i++) {
        printf("Student %d: Name: %s, Age: %d\n", i+1, students[i].name, students[i].age);
    }
    return (0);
}
