#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
};

void updateStudent(struct Student students[], int n, char name[], struct Student newDetails) {
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].name, name) == 0) {
            students[i] = newDetails;
            return;
        }
    }
    printf("Student not found\n");
}

int main() {
    struct Student Students[3] = {{"John", 20}, {"Alice", 19}, {"Bob", 21}};
    struct Student newDetails;
    char name[50];

    printf("Enter name of student to update: ");
    scanf("%s", name);

    printf("Enter new name: ");
    scanf("%s", newDetails.name);

    printf("Enter new age: ");
    scanf("%d", &newDetails.age);

    updateStudent(Students, 3, name, newDetails);

    for (int i = 0; i < 3; i++) {
        printf("Student %d: Name: %s, Age: %d\n", i+1, Students[i].name, Students[i].age);
    }
    return (0);
}

