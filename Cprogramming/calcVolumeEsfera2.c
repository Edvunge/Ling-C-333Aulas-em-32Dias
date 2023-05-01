#include <stdio.h>
#include <stdlib.h>
/*
Modify the program of programming project 2 so that it prompts the user to enter the radius of the sphere.
*/

int main(void) {
	//radius = 10 , v = 4/3PI ao cubo
	float radius = 10;
	float PI = 3.1415f, v ,sphere = 4.0;
	
	v = (sphere/(3*PI*radius*radius*radius));
	
	printf("v= %.2f",v);
	
	return 0;
}
