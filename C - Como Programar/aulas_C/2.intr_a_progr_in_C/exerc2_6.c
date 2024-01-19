#include <stdio.h>
#include <stdlib.h>

int main(void){

/*
2.6 Identifique e corrija os erros em cada uma das seguintes
instruções:*/
int numero, numero1, numero2, c = 9;

// a) printf( “O valor é %d\n”, &número );
printf("O valor e %d\n",numero);

// b) scanf( “%d%d”, &número1, número2 );
scanf("%d%d", &numero1,&numero2);

// c) if ( c < 7 );{
// printf( “C é menor que 7\n” ); }
if ( c < 7 ){
printf("C e menor que 7\n");
}

/*
d) if ( c => 7 ) {
printf( “C é igual ou menor que
7\n” );
}
*/
if (c >= 7){
    printf("C e igual ou menor que 7\n");
}
    return (0);
}