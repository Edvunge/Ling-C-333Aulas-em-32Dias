#include <stdio.h>
#include <unistd.h>

int main(){

	printf("Size of memory page = %d\n", getpagesize());
	return 0;
}
