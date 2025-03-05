#include <stdio.h>
#include <string.h>

struct Dog {
	char  name[20];
	int age;
	char race[20];
	double height, weight;
};

int main(void) {
	
	struct Dog dog;
	strcpy(dog.name, "Max");
	dog.age = 2;
	strcpy(dog.race, "cane corso");
	dog.height = 1.2;
	dog.weight = 1.30;

	printf("Dog's Names: %s\n", dog.name);
	printf("Age: %d\n", dog.age);
	printf("Race: %s\n", dog.race);
	printf("Your height is: %.2f\n", dog.height);
        printf("Weight is: %.2f\n", dog.weight);	
	return (0);
}
