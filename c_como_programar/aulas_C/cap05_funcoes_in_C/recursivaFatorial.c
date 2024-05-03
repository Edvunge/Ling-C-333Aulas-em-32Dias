#include <stdio.h>
#include <stdlib.h>

long factorial( long number ); // prototipo de funcao

int main( void ) {
	int i; // contador
	
	for (i = 0; i <= 10; i++) {
		printf( "%2d! = %ld\n",i ,factorial( i ));
	}
	return (0);
}

long factorial( long number ) {
	if ( number <= 1 ) {
		return 1;
	} else {
		return ( number * factorial( number - 1 ) );
	}
}
