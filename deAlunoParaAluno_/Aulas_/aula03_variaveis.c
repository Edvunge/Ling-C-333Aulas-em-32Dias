#include <stdio.h>
#include <stdlib.h>

int main(void){
    /* DATA TYPES:
    Type	           Storage size	                             Value range
    ---------------------------------------------------------------------------------------------
    char	            1 byte        	                      -128 to 127 or 0 to 255
    unsigned char	    1 byte          	                   0 to 255
    signed char	        1 byte               	               -128 to 127
    int	                2 or 4 bytes	                       -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
    unsigned int	    2 or 4 bytes	                       0 to 65,535 or 0 to 4,294,967,295
    short	            2 bytes	                               -32,768 to 32,767
    unsigned short	    2 bytes	                               0 to 65,535
    long	            8 bytes or (4bytes for 32 bit OS)	   -9223372036854775808 to 9223372036854775807
    unsigned long	    8 bytes	                               0 to 18446744073709551615
    */

   /* Definição de variavel: */
   int a, b;
   int c;
   float f;
 
   /* inicialização das variaveis: */
   a = 10;
   b = 20;
  
   c = a + b;
   printf("value of c : %d \n", c);

   f = 70.0/3.0;
   printf("value of f : %f \n", f);
    
    /*
    int      i, j, k;
    char     c, ch;
    float    f, salary;
    double   d;
    */
    return 0;
}