#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
	25. Calcule as raizes da equacao de 2o grau.
*/

int main() {
	float delta, a, b, c, xisUm, xisDois;
	
	printf("Insira 3 numeros:?");
    scanf("%f%f%f",&a,&b,&c);
    
	// calculo de delta
	delta = ( (b*b) - (4*a*c) );
    
	if(a == 0) {
		printf("A equacao nao possui raizes reais ");
	} else {
    	if ( delta >= 0 ) {
        	// calculo de baskhara
        	xisUm = ( ( ( - b ) + sqrt(delta) ) / ( (2) * (a) ) );
        	xisDois = ( ( ( - b ) - sqrt(delta) ) / ( (2) * (a) ) );
            printf("Assim, as raizes da equacao %f x2 %f x %f = 0 sao x1 = %f e x2 = %f",a,b,c,xisUm,xisDois);
        } else if ( delta < 0 ) {
        	printf("\nNao existe raiz.");
		} else if( delta == 0 ) {
			printf("Raiz Unica.");
		}
	}
	return 0;
}
